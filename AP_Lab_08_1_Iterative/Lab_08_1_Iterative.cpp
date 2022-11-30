// Якубовський Владислав, РІ-11, АП, ЛР 8.1 (іт. спосіб)
#include <iostream>

using namespace std;

int CountGroups(char* stringToCount)
{
    if (strlen(stringToCount) < 3)
        return 0;

    int count = 0;

    for (int ii = 0; stringToCount[ii + 2] != 0; ii++)
        if (stringToCount[ii] == 'a' && stringToCount[ii + 1] == 'b' && stringToCount[ii + 2] == 'c')
            count++;

    return count;
}

char* ChangeGroups(char* stringToChange)
{
    if (strlen(stringToChange) < 3)
        return stringToChange;

    char* stringToReturn = new char[strlen(stringToChange)];
    char* temp = stringToReturn;

    stringToReturn[0] = '\0';

    int ii = 0;

    while (stringToChange[ii + 2] != 0)
    {
        if (stringToChange[ii] == 'a' && stringToChange[ii + 1] == 'b' && stringToChange[ii + 2] == 'c')
        {
            strcat(temp, "**");
            temp += 2;
            ii += 3;
        }

        else
        {
            *temp++ = stringToChange[ii++];
            *temp = '\0';
        }
    }

    *temp++ = stringToChange[ii++];
    *temp++ = stringToChange[ii++];
    *temp = '\0';

    strcpy(stringToChange, stringToReturn);

    return stringToReturn;
}

int main()
{
    char enteredString[101];

    cout << "Enter a string: "; cin.getline(enteredString, 100);

    cout << "String contained this count of \"abc\" groups: " << CountGroups(enteredString) << endl;

    char* changedStringByResult = new char[151];

    changedStringByResult = ChangeGroups(enteredString);

    cout << "Modified string (param):\t" << enteredString << endl;
    cout << "Modified string (result):\t"  << changedStringByResult << endl;
}

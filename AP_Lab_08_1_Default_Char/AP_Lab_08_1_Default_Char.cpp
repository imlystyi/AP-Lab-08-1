// Якубовський Владислав, РІ-11, АП, ЛР 8.1 (вик. ст. функц. char[])
#include <iostream>

using namespace std;

int CountGroups(char* stringToCount)
{
    int count = 0, pos = 0;

    char* temp;

    while (temp = strstr(stringToCount + pos, "abc"))
    {
        pos = temp - stringToCount + 1;
        count++;
    }

    return count;
}

char* ChangeGroups(char* stringToChange)
{
    if (strlen(stringToChange) < 3)
        return stringToChange;

    char* stringToReturn = new char[strlen(stringToChange)];
    char* temp;

    int pos1 = 0,
        pos2 = 0;

    *stringToReturn = 0;

    while (temp = strstr(stringToChange + pos1, "abc"))
    {
        pos2 = temp - stringToChange + 3;

        strncat(stringToReturn, stringToChange + pos1, pos2 - pos1 - 3);
        strcat(stringToReturn, "**");

        pos1 = pos2;
    }

    strcat(stringToReturn, stringToChange + pos1);
    strcpy(stringToChange, stringToReturn);

    return stringToReturn;
}

int main()
{
    char enteredString[101];

    cout << "Enter a string: "; cin.getline(enteredString, 100);

    cout << "String contained this count of \"abc\" groups: " << CountGroups(enteredString) << endl;

    char* changedString = new char[151];

    changedString = ChangeGroups(enteredString);

    cout << "Modified string (param):\t" << enteredString << endl;
    cout << "Modified string (result):\t" << changedString << endl;
}

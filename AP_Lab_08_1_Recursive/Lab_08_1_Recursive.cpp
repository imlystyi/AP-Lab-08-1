// Якубовський Владислав, РІ-11, АП, ЛР 8.1 (рек. спосіб)
#include <iostream>

using namespace std;

int CountGroups(char* stringToCount, int ii = 0)
{
    if (strlen(stringToCount) < 3)
        return 0;

    if (stringToCount[ii + 2] != 0)
    {
        if (stringToCount[ii] == 'a' && stringToCount[ii + 1] == 'b' && stringToCount[ii + 2] == 'c')
            return 1 + CountGroups(stringToCount, ++ii);

        else return CountGroups(stringToCount, ++ii);
    }

    else return 0;
}

char* ChangeGroups(char* dest, const char* stringToChange, char* temp, int ii = 0)
{
    if (stringToChange[ii + 2] != 0)
    {
        if (stringToChange[ii] == 'a' && stringToChange[ii + 1] == 'b' && stringToChange[ii + 2] == 'c')
        {
            strcat(temp, "**");

            return ChangeGroups(dest, stringToChange, temp + 2, ii + 3);
        }

        else
        {
            *temp++ = stringToChange[ii++];
            *temp = '\0';

            return ChangeGroups(dest, stringToChange, temp, ii);
        }
    }
    
    else
    {
        *temp++ = stringToChange[ii++];
        *temp++ = stringToChange[ii++];
        *temp = '\0';

        return dest;
    }
}

int main()
{ 
    char enteredString[101];

    cout << "Enter a string: "; cin.getline(enteredString, 100);

    cout << "String contained this count of \"abc\" groups: " << CountGroups(enteredString) << endl;

    char* changedStringByParam = new char[151]; changedStringByParam[0] = '\0';

    char* changedStringByResult = ChangeGroups(changedStringByParam, enteredString, changedStringByParam);

    cout << "Modified string (param):\t" << changedStringByParam << endl;
    cout << "Modified string (result):\t" << changedStringByResult << endl;
}

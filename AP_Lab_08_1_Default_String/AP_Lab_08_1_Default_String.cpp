// Якубовський Владислав, РІ-11, АП, ЛР 8.1 (вик. ст. функц. string)
#include <iostream>
#include <string>

using namespace std;

int CountGroups(const string stringToCount)
{
    int count = 0;

    size_t pos = 0;

    while ((pos = stringToCount.find("abc", pos)) != -1)
    {
        pos++;
        count++;
    }

    return count;
}

string ChangeGroups(string& stringToChange)
{
    size_t pos = 0;

    while ((pos = stringToChange.find("abc", pos)) != -1)
        stringToChange.replace(pos, 3, "**");

    return stringToChange;
}

int main()
{
    string enteredString;

    cout << "Enter a string: "; getline(cin, enteredString);

    cout << "String contained this count of \"abc\" groups: " << CountGroups(enteredString) << endl;

    string changedString = ChangeGroups(enteredString);

    cout << "Modified string (param):\t" << enteredString << endl;
    cout << "Modified string (result):\t" << changedString << endl;
}

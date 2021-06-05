#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char string1[50], string2[50];
    cout << "Enter strings \n";
    cin.getline(string1,50);
    cin.getline(string2,50);
    if (strlen(string1) == strlen(string2))
        cout << "\n Both strings contain equal number of characters \n";
    else
        cout << "\n Both strings contain different number of characters \n";
    return 0;
}

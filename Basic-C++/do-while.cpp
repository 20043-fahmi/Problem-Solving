#include <iostream>

using namespace std;

int main()
{
    char ans;
    do
    {
        cout << "Hello\n";
        cout << "Do you want another greeting?\n";
        cout << "Press y for yes or  for no,\n";
        cout << "and press then return: \n";

        cin >> ans;

    } while (ans == 'y' || ans == 'Y');

    cout << "Good Bye!";
}
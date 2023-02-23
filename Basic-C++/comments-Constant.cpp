#include <iostream>
using namespace std;

int main()
{
    const double normal = 98.6; // degrees fahrenheit
    double temperature;

    cout << "Enter your temperature: ";
    cin >> temperature;

    if (temperature > normal)
    {
        cout << "You have a fever\n";
        cout << "Drink lots of liquids and get bed.\n";
    }
    else
    {
        cout << "You dont have to a fever\n";
        cout << "Go study";
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    double fuel_gauge_reading;

    cout << "Enter fuel gauge reading: ";

    cin >> fuel_gauge_reading;

    cout << "First with braces:\n";
    if (fuel_gauge_reading < 0.75)
    {
        if (fuel_gauge_reading < 0.25)
        {
            cout << "Fuel is low. Please refuel. \n";
        }
    }
    else
    {
        cout << "Fuel is over 3/4. Don't stop now!\n";
    }

    cout << "Now without braces: \n";
    if (fuel_gauge_reading < 0.75)
        if (fuel_gauge_reading < 0.25)
            cout << "Fuel very low. Please refuel.\n";
        else
            cout << "Fuel is over 3/4. Don't stop now!\n";

    return 0;
}
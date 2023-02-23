// A metric ton is 35,273.92 ounces. Write a program that will read the weight
// of a package of breakfast cereal in ounces and output the weight in metric
// tons as well as the number of boxes needed to yield 1 metric ton of cereal.
// Your program should allow the user to repeat this calculation as often as
// the user wishes.

#include <iostream>

using namespace std;

int main()
{
    const double metric = 35273.92;
    double box, weight, choose;

    do
    {
        cout << "You have a metric ton (35,273.92) cereal: \n";
        cout << "Set your cereal weight per box: \n";
        cin >> weight;
        box = metric / weight;
        cout << "Base on total of cereal, you have " << box << "  box of cereal! \n";
        cout << "Composition? (y or n) \n";
        cin >> choose;
    } while (choose == 'y' || choose == 'Y');

    cout << "Good bye! \n";
}
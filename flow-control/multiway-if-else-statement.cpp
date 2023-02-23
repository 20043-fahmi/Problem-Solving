#include <iostream>

using namespace std;

int main()
{
    int net_income;
    double tax_bill;
    double five_percent_tax, ten_percent_tax;

    cout << "Enter your net income: ";
    cin >> net_income;

    if (net_income <= 15000)
    {
        tax_bill = 0;
    }
    else if (net_income > 15000 && net_income <= 25000)
    {
        tax_bill = 0.05 * net_income;
    }
    else
    {
        tax_bill = 0.1 * net_income;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Your tax bill is: " << tax_bill << endl;
    return 0;
}
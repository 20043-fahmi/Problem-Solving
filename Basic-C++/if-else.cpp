#include <iostream>
using namespace std;

int main()
{
    int hours;
    double gross_pay, pay_rate;

    cout << "Enter hour rate of pay : $";
    cin >> pay_rate;

    cout << "Enter hours worket :";
    cin >> hours;

    if (hours > 40)
    {
        gross_pay = pay_rate * 40 + 1.5 * pay_rate * (hours - 40);
    }
    else
    {
        gross_pay = pay_rate * hours;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Hours" << hours << endl;
    cout << "Pay rate: $" << pay_rate << endl;
    cout << "Gross pay: $" << gross_pay << endl;

    return 0;
}
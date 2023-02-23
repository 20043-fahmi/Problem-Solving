#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double epsilon = 0.0001;
    double n, guess, r;
    cout << "Enter a number: ";
    cin >> n;

    guess = n / 2;

    while (abs(guess - r) >= epsilon)
    {
        r = n / guess;
        guess = (guess + r) / 2;
    }
    cout << "Square root of " << n << " is " << guess << endl;
}
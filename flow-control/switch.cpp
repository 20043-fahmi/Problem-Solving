#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "Please enter your midterm exam grade: ";

    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "Excellent!" << endl;
        cout << "You dont need to final exam" << endl;
        break;
    case 'B':
        cout << "Good!" << endl;
        grade = 'A';
        cout << "Your grade now is: " << grade << endl;
        break;
    case 'C':
        cout << "You need to study more" << endl;
        break;
    case 'D':
    case 'F':
        cout << "You need to study more" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
        break;
    }

    return 0;
}
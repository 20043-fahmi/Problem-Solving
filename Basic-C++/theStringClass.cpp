#include <iostream>
#include <string>
using namespace std;

int main()
{
    string middle_name, pet_name;
    string alter_ego_name;

    cout << "Enter your middle name an th name of your pet. \n";
    cin >> middle_name >> pet_name;
    alter_ego_name = middle_name + ' ' + pet_name;

    cout << "Your alter ego name is " << alter_ego_name << endl;
    return 0;
}
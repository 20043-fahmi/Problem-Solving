#include <iostream>
using namespace std;

int main () {
    int number_of_bars;
    double one_weight, total_weight;

    cout << "Enter th number of candy bars in a packagem\n";
    cout <<"and the weight of ounces of one candy bar.\n";

    cin >> number_of_bars;
    cin >> one_weight;

    total_weight = number_of_bars * one_weight;

    cout << number_of_bars <<"candu bars\n";
    cout << one_weight<< "ounces each\n";
    cout << "Total weight of the candy bars is " << total_weight << "ounces.\n";

    cout << "Try another branch.\n";
    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight of ounces of one candy bar. \n";
    cout << "Then press return.\n";

    cin >> number_of_bars;
    cin >> one_weight;

    total_weight = number_of_bars * one_weight;

    cout << number_of_bars <<"candu bars\n";
    cout << one_weight<< "ounces each\n";
    cout << "Total weight of the candy bars is " << total_weight << "ounces.\n";

    cout << "Perhaps an apple would be healthier.\n";

    return 0;
}
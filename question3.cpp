#include <iostream>
using namespace std;
int main() {
    int cel;
    float fah;

    cout << "enter the temp in celcius" << endl;
    cin >> cel;
    fah = (9*cel)/5 + 32;
    cout << "the temp in fahrenheit is " << fah << endl;
    return 0;
}
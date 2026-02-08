#include <iostream>
using namespace std;

class Average
{
    int a, b, c, sum;

public:
    void getnum();
    void average();
};

void Average::getnum()
{
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
}

void Average::average()
{
    sum = (a + b+ c)/3;
    cout << "the average is: " << sum << endl;
}

int main()
{
    Average a1;
    a1.getnum();
    a1.average();
    return 0;
}


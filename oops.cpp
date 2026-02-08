// write a program to add two number by by using class and object
#include <iostream>
using namespace std;

class Addition
{
    int a, b, sum;

public:
    void getData();
    void display();
};

void Addition::getData()
{
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

void Addition::display()
{
    sum = a + b;
    cout << "Sum of two numbers is: " << sum << endl;
}

int main()
{
    Addition a1;
    a1.getData();
    a1.display();
    return 0;
}



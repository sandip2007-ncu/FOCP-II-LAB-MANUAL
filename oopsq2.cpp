// write a program to add two number by by using class and object
#include <iostream>
using namespace std;

class Addition
{
    int rad , area;

public:
    void radius();
    void getarea();
};

void Addition::radius()
{
    cout << "Enter radius value: ";
    cin >> rad;
   
}
void Addition::getarea()
{
    area = 3.14 * rad * rad;
    cout << "the area of circle : " << area << endl;
}

int main()
{
    Addition a1;
    a1.radius();
    a1.getarea();
    return 0;
}


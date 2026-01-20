#include<iostream>
using namespace std;
int main() {
    int a, b, sum, sub, mul;
    cout<<"enter first no";
    cin>>a;
    cout<<"enter second no";
    cin>>b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    cout<<"The sum of two numbers is "<<sum;
    cout<<"\nThe subtraction of two numbers is "<<sub;
    cout<<"\nThe multiplication of two numbers is "<<mul;
    return 0;
}
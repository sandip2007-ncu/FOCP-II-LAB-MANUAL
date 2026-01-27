#include<iostream>
using namespace std;
int main(){
    int sal, net_sal, employs, total_sal;
    cout<<"Enter the salary"<<endl;
    cin>>sal;
    cout<<"Enter the number of employees"<<endl;
    cin>>employs;
    total_sal = sal + (0.12*sal);
    net_sal = total_sal * employs;
    cout<<"the net salary is "<<net_sal<<endl;
}
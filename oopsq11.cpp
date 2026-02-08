#include <iostream>
using namespace std;
class Bill{
    int amt, dis;
    public:
    void getDis(){
        cout<<"enter the total amount"<<endl;
        cin>>amt;
    }
    void discount(){
        if(amt>1000){
            dis = amt - (amt * 0.01)
        }
    }
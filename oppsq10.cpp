#include <iostream>
using namespace std;
class Event{
    int year;
    public:
    void getLeap(){
        cout<<"enter the year"<<endl;
        cin>>year;
    }
    void checkLeap(){
        if(year % 4 == 0 ){
            cout<<"Feburary will have 29 days in" << " " << year << endl;
        }
        else {
            cout<<"Feburary will have 28 days in"<< " " << year << endl;
        }
    }

};
int main(){
    Event a1;
    a1.getLeap();
    a1.checkLeap();
    return 0;
}
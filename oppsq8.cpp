#include <iostream>
using namespace std;
class Event{
    int id;
    public:
    void getId(){
        cout<<"enter the event ID"<<endl;
        cin>>id;
    }
    void checkId(){
        if(id % 3 == 0 && id % 5 == 0){
            cout<<"Buzz and fuzz"<< endl;
        }
        else if (id % 5 == 0){
            cout<<"Fuzz"<< endl;
        }
        else if (id % 3 == 0){
            cout<<"Buzz"<< endl;
        }

    }

};
int main(){
    Event a1;
    a1.getId();
    a1.checkId();
    return 0;
}
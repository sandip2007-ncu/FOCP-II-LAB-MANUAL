#include <iostream>
using namespace std;

class Vote {
    int age;

public:
    void getAge() {
        cout << "Enter your age: ";
        cin >> age;
    }

    void eligibility() {
        if (age < 18) {
            cout << "You are not eligible to vote" << endl;
        } 
        else 
        {
            cout << "You are eligible to vote" << endl;
        }
    }
};

int main() {
    Vote a1;
    a1.getAge();
    a1.eligibility();
    return 0;
}

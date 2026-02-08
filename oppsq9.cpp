#include <iostream>
using namespace std;

class LetterCheck {
    char ch;

public:
    void getInput() {
        cout << "Enter a character: ";
        cin >> ch;
    }

    void classify() {
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            cout << "It is a vowel." << endl;
            }
         else {
             cout << "It is a consonant." << endl;
        }
        }
        
    };

int main() {
    LetterCheck obj;
    obj.getInput();
    obj.classify();
    return 0;
}

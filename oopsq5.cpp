#include <iostream>
using namespace std;

class SwapTemp {
private:
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "After swapping:\n";
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    SwapTemp obj;
    obj.input();
    obj.swapValues();
    obj.display();
    return 0;
}

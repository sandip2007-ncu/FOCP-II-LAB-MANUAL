#include <iostream>
using namespace std;

class Conversion
{
    int cel, fer;

public:
    void tempcel();
    void tempfer();
};

void Conversion ::tempcel()
{
    cout << "Enter the temp in celcius : ";
    cin >> cel;
    
}

void Conversion ::tempfer()
{
    fer = (9*cel+160) / 5;
    cout << "conversion of celcius to ferhanhite: " << fer << endl;
}

int main()
{
    Conversion  a1;
    a1.tempcel();
    a1.tempfer();
    return 0;
}



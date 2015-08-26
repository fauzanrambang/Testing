#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,c,ong;
    cout << "Masukkan sisi-1 : ";
    cin >> a;
    cin.ignore();
    cout << "Masukkan sisi-2 : ";
    cin >> c;
    cin.ignore();
    cout << "Masukkan sisi-3 : ";
    cin >> ong;
    cin.ignore();

    if (a == c&&c == ong)
    {
        cout << "Segitiga sama sisi";
    }
    else if (a == c&&c != ong)
    {
        cout << "Segitiga sama kaki";
    }
    else
    {
        cout << "Segitiga sembarang";
    }
    return(0);
}

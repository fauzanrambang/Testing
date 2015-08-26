#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    float x1,x2,hasil1,hasil;
    cout << "Masukkan nilai a : ";
    cin >> a;
    cin.ignore();
    cout << "Masukkan nilai b : ";
    cin >> b;
    cin.ignore();
    cout << "Masukkan nilai c : ";
    cin >> c;
    cin.ignore();
    hasil1 = sqrt((b*b)-(4*a*c));
    hasil = 2*a;
    x1 = ((-b + hasil1)/hasil);
    x2 = ((-b - hasil1)/hasil);
    cout << "Nilai X1 adalah : " << x1 <<endl;
    cout << "Nilai X2 adalah : " << x2 << endl;
    return(0);
}

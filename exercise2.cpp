#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,c,ong;
    float acong;
    cout << "Masukkan angka : ";
    cin >> ong ;
    cin.ignore();
    cout << "Masukkan pangkat : ";
    cin >> c ;
    cin.ignore();
    acong = 1;
    a = 1;
    while (a<=c)
    {
        acong = acong*ong;
        a++;
    }
    cout << "Pangkat dari " << ong << " adalah : " << acong;
    return(0);
}

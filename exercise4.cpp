#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,c,ong;
    while (ong != 9999)
    {
        cout << "Masukkan angka (9999 untuk stop) : ";
        cin >> ong;
        a=ong;
        if (a<c)
        {
            c=a;
        }
    }
    cout << "Nilai terkecil  adalah : " << c;
    return(0);
}


#include <iostream>
using namespace std;

int elemen[10];
int npanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array: ";
        cin >> npanjang;
        if (npanjang <= 10)
            break;
        else
        {
            cout << "\nArray maksimal 20 elemen.\n";
        }
    }

    cout << "===================" << endl;
    cout << "Masukan elemen arry" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < npanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << "=";
        cin >> elemen[i];
    }
}
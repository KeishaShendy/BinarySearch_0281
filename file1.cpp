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
void bubleshortArray()
{
    int pass = 1;

    do
    {
        for (int j = 0; j <= npanjang - 1 - pass; j++)
        {
            if (elemen[j] > elemen[j + 1])
            {
                int temp = elemen[j];
                elemen[j] = elemen[j + 1];
                elemen[j + 1] = temp;
            }
        }

        cout << "\nPass " << pass << "= ";
        for (int k = 0; k < npanjang; k++)
        {
            cout << elemen[k] << " ";
        }
        cout << endl;

        pass = pass + 1;

    } while (pass <= npanjang - 1);
}
void display()
{
    cout << endl;
    cout << "================================" << endl;
    cout << "Element Array yang telah disusun" << endl;
    cout << "================================" << endl;

    for (int j = 0; j < npanjang; j++)
    {
        cout << elemen[j];
        if (j < npanjang - 1)
        {
            cout << " --> ";
        }
    }

    cout << endl;
    cout << "\nJumlah Pass = " << npanjang - 1 << endl;
}
void binarySearch()
{
    cout << "\nMasukan element yang ingin dicari = ";
    cin >> x;

    int low = 0;
    int high = npanjang - 1;

    do
    {
        int mid = (low + high) / 2;

        if (elemen[mid] == x)
        {
            cout << x << " ditemukan pada index ke-" << mid << endl;
            return;
        }
        else if (x < elemen[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }

    } while (low <= high);

    cout << x << " tidak ditemukan" << endl;
}
int main()
{
    input();
    bubleshortArray();
    display();
    binarySearch();
}
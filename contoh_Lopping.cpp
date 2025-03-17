#include <iostream>
using namespace std;

int main ()
{
    int n;
    int perulanganWhile = 0;
    int perulanganDo =0;
    
    // perulangan dengan for

    cout << "perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "nilai n = " << n << "Selamat datang" << endl;
    }
    cout << "nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "perulangan for pencacah turun" << endl;
    // perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "nilai n + " << "Selamat datang" << endl;
    }
    cout << "nilai n terakhir = " << n;
    cout << endl;

    srand(time(0));

    cout << "nilai awal n = " << n << endl;
    while (n < 7)
    {
        cout << "nilai n = " << endl;
        n = rand () % 10;
        perulanganWhile++;
    }
    cout << "jumlah perulangan = " << perulanganWhile << endl;
    cout << "nilai n terakhir = " << n << endl;

    cout << "perulangan do while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "nilai awal n =" << n << endl;
}


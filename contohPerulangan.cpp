#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    //Perulangan dengan for pencacah naik
    cout << "perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;
    //Perulangan dengan for pencacah turun
    for (n = 5; n > 0; n--)
    {
        cout << "nilai n = " << n << "Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    //Perulangan while dengan angka acak
    cout << "Perulangan while" << endl;
    srand(time(0));
    n = rand() % 10;
    cout << "Nilai awal n = " << n << endl;
    while (n < 7)
    {
        cout << "nilai n = " << n << endl;
        n = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;

    //Perulangan Do While dengan angka acak
    cout << "Perulangan Do While" << endl;
    srand(time(0));
    n = rand() % 10;
    cout << "Nilai awal n = " << n << endl;
    do
    {
        cout << "nilai n = " << n << endl;
        n = rand() % 10;
        perulanganDo++;
    } while (n < 7);
    cout << "Jumlah perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;
}
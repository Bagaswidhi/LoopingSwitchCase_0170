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
}
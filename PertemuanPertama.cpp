

#include <iostream>

using namespace std;
int main()
{
    //Begin
    //numeric nAlas ,nTinggi ,nLuas
    //Display 'Masukan Alas = '
    //Accept nAlas
    //Display 'Masukan Tinggi = '
    //Accept nTinggi
    //Compute nLuas = nAlas*nTinggi/2
    //Display 'Luasnya =' + nLuas
    //End

    float nAlas, nTinggi, nLuas;
    cout << "Masukan Alas =";
    cin >> nAlas;
    cout << "Masukan Tinggi=";
    cin >> nTinggi;
    nLuas = nAlas * nTinggi / 2;
    cout << "Luasnya = " << nLuas;

    int Panjang, Lebar, Luas;
    cout << "Masukan Panjang = ";
    cin >> Panjang;
    cout << "Masukan Lebar = ";
    cin >> Lebar;
    Luas = Panjang * Lebar;
    cout << "Luas Persegi Panjang adalah = " << Luas;
}
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int panjang,lebar,tinggi;

    cout << "panjang: "; cin >> panjang;
    cout << "lebar: "; cin >> lebar;
    cout << "tinggi "; cin >> tinggi;

    int volume= panjang*lebar*tinggi;
    int lp= (2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi);

    cout << "volume: " << volume;
    cout << "luas permukaan: " << lp;
}
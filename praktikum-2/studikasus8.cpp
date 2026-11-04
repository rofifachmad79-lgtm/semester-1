#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    int panjang,lebar,tinggi;
    double harga;

    cout << "panjang ruangan: "; cin >> panjang;
    cout << "lebar ruangan: "; cin >> lebar;
    cout << "tinggi ruangan: "; cin >> tinggi;
    cout << "harga cat per liter: "; cin >> harga;

    int lp = (2*panjang*lebar)+(2*panjang*tinggi)+(2*tinggi*lebar);
    double cat = lp/10;
    int n = ceil(cat);
    double biaya = n*harga;

    cout << "luas dinding: " << lp << endl;
    cout << "jumlah cat yang dibutuhkan(liter): " << cat << endl;
    cout << "total biaya: " << biaya;


}
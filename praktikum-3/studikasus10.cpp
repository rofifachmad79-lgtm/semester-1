#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double total = 0,n;
    int jumlah;

    cout << "masukkan julah nilai: ";
    cin >> jumlah;

    for (int i = 1; i <= jumlah ; i++) {
        cout << "masukkan nilai ke-" << i << ": ";
        cin >> n;
        total += n;

    }
    double rata = total/jumlah;

    cout << "rata-rata nilai: " << rata << endl;

    if (jumlah <=2) {
        cout << "variasi rendah";
    }
    else {cout << "variasi tinggi";}
}
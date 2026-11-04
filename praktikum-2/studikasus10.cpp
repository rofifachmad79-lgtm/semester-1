#include <iostream>
using namespace std;

int main () {
    int jumlah;
    cout << "masukkan jumlah nilai:" << endl;
    cin >> jumlah;
    float nilai, total = 0;
    for (int i = 1; i <= jumlah; i++) {
        cout << "masukkan data ke-" << i << ":";
        cin >> nilai;
        total += nilai;
    }
    float ratarata = total/jumlah;
    cout << "nilai rata-rata=" << ratarata;

    return 0;

}
#include <iostream>
#include <string>

using namespace std;

int main () {
    int jumlahmapel;
    double tnilai = 0,nilai;

    cout << "masukkan jumlah mata pelajaran: ";
    cin >> jumlahmapel;

    for (int i = 1; i <= jumlahmapel; i++) {
        cout << "masukkan nilai ke-" << i << " ";
        cin >> nilai;

        tnilai += nilai;
    }
    double ratarata = tnilai/jumlahmapel;
    cout << "Rata-rata nilai: " << ratarata << endl;

    if (ratarata >= 85) {
        cout << "prestasi : Sangat baik";
    }
    else if (ratarata >= 70) {
        cout << "prestasi : baik";
    }
    else if (ratarata >= 50) {
        cout << "prestasi : cukup";
    }
    else {
        cout << "Prestasi : perlu peningkatan";
    }

    return 0;
}
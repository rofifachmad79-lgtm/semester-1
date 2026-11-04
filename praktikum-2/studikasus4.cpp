#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
    int rupiah;
    cout << "masukkan nominal rupiah:" << endl;
    cin >> rupiah;
    cout << "nilai dalam dollar:" << endl;
    if (rupiah % 17530 == 0) {
        int irup = rupiah / 17530;
        cout << irup;
    }
    else {
        float flrup = static_cast<float>(rupiah)/17530;
        cout << fixed << setprecision(2) << flrup;
    }
    


    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int meter;
    cout << "masukkan besaran dalam satuan meter:";
    cin >> meter;
    cout << "meter" << setw(15) << "sentimeter" << setw(15) << "milimeter" << setw(15) << "kilometer" << endl;
    cout << meter << setw(15) << meter*100 << setw(15) << meter*1000 << setw(15);
     if (meter%1000 == 0) {
        cout << meter/1000;
        }
    else {
        float flmeter = static_cast <float>(meter)/1000;
        cout << flmeter;
    }
}
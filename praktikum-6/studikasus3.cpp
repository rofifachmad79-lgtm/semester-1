#include <iostream>
using namespace std;

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "angka genap : ";
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0){
            cout << arr [i] << ",";
        }    
    }
    cout << endl;
    cout << "angka ganjil : ";
    for (int i = 0; i < 5; i++) {
        if (arr [i] % 2 != 0) {
            cout << arr [i] << ",";
        }
    }
}
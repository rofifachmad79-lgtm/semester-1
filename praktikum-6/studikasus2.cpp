#include <iostream>
#include <iomanip>
using namespace std;

int main () {
int arr[5] = {10, 20, 30, 50 ,40};
int max = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "nilai terbesar: " << max << endl;
}
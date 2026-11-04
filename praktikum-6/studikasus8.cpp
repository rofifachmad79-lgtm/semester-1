#include <iostream>
using namespace std;

void printreverse (int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main () {
    int numbers[5] = {1, 2, 3, 4, 5};
    cout << "bilangan terbalik: ";
    printreverse (numbers, 5);
}
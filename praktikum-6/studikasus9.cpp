#include <iostream> 
using namespace std;

void print (int arr[], int size, int index = 0) {
    if (index < size) {
        cout << arr[index] << " ";
        print (arr, size, index+1);
    }
}
int main () {
    int numbers [5] = {100, 20, 30, 40, 50};
    cout << "ellemen array: ";
    print (numbers, 5);
    cout << endl;
}
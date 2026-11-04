#include <iostream>
#include <iomanip>
using namespace std;

int countvowels (char arr[], int size) {
    int count = 0;
    for (int i = 0; i <size; i++) {
        if (arr[i] == 'a' || arr [i] == 'i' || arr [i] == 'u' || arr[i] == 'e' || arr[i] == 'o'){
            count++;
        } 
    }
    return count;
}
int main() {
    char latters [5] = {'a','b','c','e','i'};
    cout << "jumlah vokal: " << countvowels (latters, 5) << endl;
}
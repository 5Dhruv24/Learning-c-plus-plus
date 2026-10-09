//program to find the sum of array using recursion
#include <iostream>
using namespace std;

int result(int arr[], int id, int n) {
    if (id >= n) {
        return 0;
    }
    return arr[id] + result(arr, id + 1, n);
}

int main() {
    int arr[5] = {1, 2, 6, 4, 5};
    cout << result(arr, 0, 5);
    return 0;
}
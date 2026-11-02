#include <iostream>
using namespace std;

int result(int arr[], int l, int h) {
    while (l < h) {                 // note: l < h, not l <= h
        int mid = l + (h - l) / 2;
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;            // peak is on the right
        else
            h = mid;                // mid could itself be the peak
    }
    return arr[l];                  // l == h is a peak
}

int main() {
    int arr[] = {3, 6, 7, 21, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << result(arr, 0, n - 1);  // prints 21
    return 0;
}
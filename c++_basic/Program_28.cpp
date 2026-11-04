#include <iostream>
using namespace std;

int result(int arr[], int l, int h) {
    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (mid == 0) {
            return (arr[0] >= arr[1]) ? 0 : 1;
        }

        if (mid == h) {
            return (arr[h] >= arr[h - 1]) ? h : h - 1;
        }

        if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1]) {
            return mid;
        }

        if (arr[mid - 1] > arr[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {5, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Peak index: " << result(arr, 0, n - 1) << endl;
    return 0;
}
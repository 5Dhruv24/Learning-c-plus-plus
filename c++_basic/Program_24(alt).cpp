#include <iostream>
using namespace std;

int rbs(int arr[], int n, int target) {
    int s = 0, f = n - 1;
    while (s <= f) {
        int mid = s + (f - s) / 2;
        if (arr[mid] == target) return mid;

        if (arr[s] <= arr[mid]) {                 // left half [s..mid] is sorted
            if (arr[s] <= target && target < arr[mid])
                f = mid - 1;
            else
                s = mid + 1;
        } else {                                  // right half [mid..f] is sorted
            if (arr[mid] < target && target <= arr[f])
                s = mid + 1;
            else
                f = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {6, 7, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target: ";
    cin >> target;
    cout << rbs(arr, n, target) << endl;
    return 0;
}
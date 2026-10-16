// count sort
#include <iostream>
#include <vector>
using namespace std;

void countsort(int* arr, int n) {
    if (n <= 0) return;

    // max number
    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
    }

    // frequency array (size mx+1, zero-initialized)
    vector<int> fre(mx + 1, 0);
    for (int i = 0; i < n; i++) {
        fre[arr[i]]++;
    }

    // prefix sum (cumulative frequency)
    for (int i = 1; i <= mx; i++) {
        fre[i] += fre[i - 1];
    }

    // build answer (go backwards to keep the sort stable)
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[fre[arr[i]] - 1] = arr[i];
        fre[arr[i]]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = ans[i];
    }
}

int main() {
    int arr[] = {23, 2, 5, 6, 2, 6, 43, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    countsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    return 0;
}
int arr[]={23,2,5,6,2,6,43,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
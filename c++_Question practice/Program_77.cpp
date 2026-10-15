// program to sort the list of names of fruit
#include <iostream>
#include <cstring>
using namespace std;

void selectionSort(char v[][60], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(v[min], v[j]) > 0) {
                min = j;
            }
        }
        if (min != i) {
            char temp[60];
            strcpy(temp, v[min]);
            strcpy(v[min], v[i]);
            strcpy(v[i], temp);
        }
    }
}

int main() {
    char arr[][60] = {"Mango", "Dragonfruit", "Pomegranate", "Blueberry", "Kiwi",
                      "Avocado", "Papaya", "Watermelon", "Pineapple", "Fig"};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    int uniqueIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    return uniqueIndex + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = 8;

    int newSize = removeDuplicates(arr, n);

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nNew size: " << newSize << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void moveZeros(int arr[], int n) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    for (int i = index; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {1, 0, 3, 0, 5, 2};
    int n = 6;

    moveZeros(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
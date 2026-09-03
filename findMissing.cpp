#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int size, int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};

    cout << findMissing(arr, 5, 6) << endl;

    return 0;
}
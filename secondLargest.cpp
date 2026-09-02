#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 25, 7, 42, 18};
    cout << secondLargest(arr, 5) << endl;
    return 0;
}
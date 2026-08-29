#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int n){
    int largest = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {10, 25, 7, 42, 18};
    cout << findMax(arr, 5) << endl;
    return 0;
}
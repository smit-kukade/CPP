#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            return false;
        }
    }
    return true;
}

int main(){
    //code
    int arr[] = {1, 2, 3, 4, 5};
    cout << isSorted(arr, 5) << endl;
    return 0;
}
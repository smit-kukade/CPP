#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int n){
    int smallest = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main(){
    //code
    int arr[] = {45, 12, 78, 3, 29};
    cout << findMin(arr, 5) << endl;
    return 0;
}
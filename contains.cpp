#include <bits/stdc++.h>
using namespace std;

bool contains(int arr[], int n, int target){
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){
    // code
    int arr[] = {10, 25, 7, 42, 18};
    cout << contains(arr, 5, 42) << endl;
    return 0;
}
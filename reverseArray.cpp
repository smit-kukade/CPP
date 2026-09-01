#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    int left = 0, right = n -1;

    while (left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main(){
    //code
   int arr[] = {10, 20, 30, 40, 50};
   int n = sizeof(arr) / sizeof(arr[0]);
   reverseArray(arr, n);
   for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
   }
    return 0;
}
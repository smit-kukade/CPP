#include<bits/stdc++.h>
using namespace std;

int countOccurrences(int arr[], int n, int target){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            count += 1;
        }
    }
    return count;
}

int main(){
    //code
    int arr[] = {1, 4, 2, 4, 7, 4, 9};
    cout << countOccurrences(arr, 7, 4) << endl;
    return 0;
}
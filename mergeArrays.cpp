#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]){
    int index = 0;
    for (int i = 0; i < n1; i++){
        result[index] = arr1[i];
        index++;
    }
    for (int j = 0; j < n2; j++){
        result[index] = arr2[j];
        index++;
    }
}

int main(){
    //code
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n1 = 3;
    int n2 = 3;
    int result[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, result);

    for (int i = 0; i < n1 + n2; i++){
        cout << result[i] << " ";
    }
    return 0;
}
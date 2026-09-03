#include <bits/stdc++.h>
using namespace std;

void findCommon(int arr1[], int n1, int arr2[], int n2){
    for (int i = 0; i < n1; i++){
        for (int j = 0; j < n2; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main(){
    // code
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    findCommon(arr1, 5, arr2, 5);
    return 0;
}
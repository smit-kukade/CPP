#include <bits/stdc++.h>
using namespace std;

int arraySum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr[] = {10, 20, 30, 40};
    cout << arraySum(arr, 4) << endl;
    return 0;
}

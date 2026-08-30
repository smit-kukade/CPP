#include <bits/stdc++.h>
using namespace std;

int countEven(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            count += 1;
        }
    }
    return count;

}

int main(){
    //code
    int arr[] = {10, 15, 22, 7, 8, 13};
    cout << countEven(arr, 6) << endl;
    return 0;
}
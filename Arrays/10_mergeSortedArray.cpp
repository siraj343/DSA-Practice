#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr1, int m, vector<int>& arr2, int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while (i >=0 && j >= 0){
        if (arr1[i]> arr2[j]){
            arr1[k] = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }
    while (j >= 0){
        arr1[k] = arr2[j];
        j--;
        k--;
    }
    
}


int main() {

    vector<int> arr1 = {4, 7, 8, 0, 0, 0};
    vector<int> arr2 = {3, 5, 6};

    int m = 3;
    int n = 3;

    merge(arr1, m, arr2, n);

    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
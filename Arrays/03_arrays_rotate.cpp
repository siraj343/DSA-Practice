#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int sorted(vector<int> &arr) {
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] <arr[i-1]) return false;
    }
    return true;
}

// void reverse(vector<int> &arr) {
//     int left = 0;
//     int right = arr.size() - 1;
    
//     while(left < right) {
//         int temp = arr[left];
//         arr[left] = arr[right];
//         arr[right]  = temp;
//         left++;
//         right--;
//     }
// }
int main () {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << sorted(arr) << endl;
    // reverse(arr);

    cout << "Rotated array: ";

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
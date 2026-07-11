#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr ){
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}
int main () {
    vector<int> arr = {12, 45, 7, 89, 34, 23};

    cout << "Largest Element: " << largestElement(arr) << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr ){
    int largest = arr[0];
        int slargest = -1;
        
        for(int i = 1; i < arr.size(); i++){
            if (arr[i] > largest) {
                slargest = largest;
                largest = arr[i];
            } 
            else if (arr[i] > slargest && arr[i] != largest) {
                slargest = arr[i];
            }
        }
        return slargest;
}
int main () {
    vector<int> arr = {12, 45, 7, 89, 34, 23};

    cout << "second Largest Element: " << secondLargest(arr) << endl;

    return 0;
}
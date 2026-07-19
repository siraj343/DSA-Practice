#include<bits/stdc++.h>
using namespace std;

void sortNegativesFirst(vector<int> &arr ){
    int n = arr.size();
    int i= 0;
    int j= n-1;

    while (i < j)
    {
        if (arr[i] < 0) i++;

        else if ( arr[j] > 0) j--;

        else {
            swap(arr[i], arr[j]);
        }
    }
    
}
int main () {
    vector<int> arr = {-2, -4, 4, 0, 5,8, 1, -3, 9};

    sortNegativesFirst(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    

    return 0;
}
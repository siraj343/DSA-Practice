#include<bits/stdc++.h>
using namespace std;

int sortZeroesOne(vector<int> &arr ){
    int n = arr.size();
    int i= 0;
    int j= n-1;

    while (i < j)
    {
        if (arr[i]==0) i++;
        if (arr[j]==1) j--;
        else if (arr[i] == 1 && arr[j] == 0) {
            arr[i] = 0;
            arr[j] = 1;
        }
    }
    
}
int main () {
    vector<int> arr = {0, 1, 1, 0, 1, 0, 1, 0, 0};

    sortZeroesOne(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums){
    int n = nums.size(); 
    int i=0, j= 1;

    while (j<n){
        if (nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return i+1;
}

int main() {

    vector<int> nums = {0, 0, 0, 1, 1, 2, 3, 3, 4};
    int k = removeDuplicates(nums);
    cout <<"k: "<<k<<endl;

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}
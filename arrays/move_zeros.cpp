#include<bits/stdc++.h>
using namespace std ;

void zeros(vector<int> & nums , int n){
    int i =0;
        for(int j =0; j<nums.size(); ++j){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;    
        }
        }
}           

void print(vector<int> & arr){
    for(auto i : arr){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr = {1, 0, 2, 0, 4, 0, 5, 0, 6};
    zeros(arr, arr.size());
    print(arr);  // Output: 1 2 4 5 6 0 0 0 0
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr , int k){
    int n = arr.size();
    vector<int> temp(n);

    for(int i =0; i < n; ++i){
        temp[(i+k)%n]=arr[i];
    }
    for(int i = 0; i < n; ++i){

    }
    arr = temp;

}
void rotate2(vector<int> &arr , int k){
    k = k%arr.size();
    cout<<k<<endl;
    reverse(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); ++i){
        cout<<arr[i]<<" ";
    }
    reverse(arr.begin(),arr.begin()+k);
      for(int i = 0; i < arr.size(); ++i){
        cout<<arr[i]<<" ";
    }
    reverse(arr.begin()+k,arr.end());
      for(int i = 0; i < arr.size(); ++i){
        cout<<arr[i]<<" ";
    }
}
void print(vector<int> &arr){       
    for(auto i: arr){
        cout<<arr[i]<<" ";
    }
}
int main()  
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    rotate2(arr,k);
    print(arr);
    


return 0;
}
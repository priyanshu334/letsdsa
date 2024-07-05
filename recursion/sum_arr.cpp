#include<iostream>
using namespace std;
int sum2(int arr[], int n){
    int sum =0;
    if(n==0) return 0;
    if(n==1) return arr[0];
    sum = arr[0] + sum2(arr+1,n-1);
    return sum;
    
}
int sum(int arr[], int n){
    int sum =0;
    for(int i=0; i<n; ++i){
        sum+= arr[i];
    }
    return sum;
}
int main()
{
return 0;
}
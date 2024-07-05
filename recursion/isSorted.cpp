#include<iostream>
using namespace std;
bool isSorted(int arr[], int s){
    if(s==0||s==1) return true;

    if(arr[0]>arr[1]) return false;

    return isSorted(arr+1,s-1);
}
int main()
{
int arr[3] = {1,3,2};

if(isSorted(arr,3)) cout<<"Array is sorted";
else cout<<"Array is not sorted";

return 0;
}
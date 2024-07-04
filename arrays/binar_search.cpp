#include<iostream>
using namespace std;
bool search(int arr[], int n, int k){
    int s =0;
    int e = n-1;
    int mid = s +(e-s)/2;
    while(e>s){
        if(arr[mid]==k){
            return true;
        }
        if(arr[mid]>k){
            e =mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    bool present = search(arr, n, x);
    cout << "Element " << x << " is present in array: " << (present? "Yes" : "No") << endl;
    
return 0;
}
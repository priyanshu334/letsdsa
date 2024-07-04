#include<iostream>
using namespace std;
void sort (int arr[], int n){
    for(int i =0; i<n-1; ++i){
        for(int j =i+1; j<n; ++j){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void sort2(int arr[], int n){

    int i , j;
    bool swapped ;
    for(i =0; i<n; ++i){
        swapped = false;
        for(j =0; j<n-i-1; ++j){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort2(arr, n);
    cout << "Sorted array in ascending order is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
return 0;
}
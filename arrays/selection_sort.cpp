#include<iostream>
using namespace std;

void sort(int arr[], int n){
    for(int i =0; i<n-1; ++i){
        int min_index =  i;
        for(int j =i+1; j<n; ++j){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    sort(arr, n);

    cout << "\nArray after sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    
return 0;
}
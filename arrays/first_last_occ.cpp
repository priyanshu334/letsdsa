#include<iostream>
#include<vector>
using namespace std;

int first(vector<int> &arr, int k){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;

}

int last(vector<int> &arr, int k){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = e+(e-s)/2;
    while(s<e){
        if(arr[mid]==k){
            s = mid+1;
        }
        if(arr[mid]>k){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return mid-1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 4, 4, 5, 6, 7};
    int k = 4;
    int first_index = first(arr, k);
    int last_index = last(arr, k);
    if(first_index!=-1){
        cout<<"First occurrence of "<<k<<" is at index "<<first_index<<endl;
        cout<<"Last occurrence of "<<k<<" is at index "<<last_index<<endl;
    }
    else{
        cout<<k<<" is not present in the array."<<endl;
    }
    
return 0;
}
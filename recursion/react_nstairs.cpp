#include<iostream>
using namespace std;
int reach(int n){
    if(n<0){
        return 0;
    }
    if(n==0) return 1;

    //recurane relation
    int ans = reach(n-1)+reach(n-2);
    return ans;
}
int main()
{

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of ways to reach "<<n<<" stairs: "<<reach(n);
    
return 0;
}
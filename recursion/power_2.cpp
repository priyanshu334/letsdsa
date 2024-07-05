#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int ans = 2* power(n-1);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The power of 2 raised to "<<n<<" is: "<<power(n);
    
return 0;
}
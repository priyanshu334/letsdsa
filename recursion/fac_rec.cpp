#include<iostream>
using namespace std;
int fac(int n){
    //base case 
    if(n==0||n==1){
        return 1;
    }
    int chotti =  fac(n-1);
    int badi = n*chotti;
    //recursive case 
    return badi;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<fac(n)<<endl;
    
return 0;
}
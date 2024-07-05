#include<iostream>
using namespace std;

int fac(int n){
    if(n<0){
        return -1;
    }else if(n==0||n==1){
        return 1;
    }else{
        int fact =1;
        for(int i =2 ; i<=n; ++i){
            fact*=i;
        }
         return fact;
    }
   
}

int main()
{   

    int n;
    cin>>n;
    int fact = fac(n);
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    
return 0;
}
#include<iostream>
using namespace std;
void cnt(int n){
    if(n==0) return ;

    cout<<n<<" ";
    cnt(n-1);
}
int main()
{
    int n=5;
    cnt(n);
return 0;
}
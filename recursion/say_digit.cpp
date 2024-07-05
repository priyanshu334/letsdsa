#include<iostream>
using namespace std;
void say(string arr[], int n){
    if(n==0)  return ;
    int digit = n%10;
    // cout<<digit<<endl;

    n = n/10;
    // cout<<n<<" "<<endl;
    // cout<<endl;
  
    say(arr,n);
    cout<<endl;
      cout<<arr[digit]<<" ";
}
int main()
{
    int n = 42;
    string digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    cout<<endl;
    say(digits, n);


return 0;
}
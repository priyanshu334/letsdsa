#include<iostream>
#include<string>
using namespace std;

int replace(int n){
    string temp = to_string(n);
    int n1 = temp.length();
    for(int i=0; i<n1; ++i){
        if(temp[i]=='0'){
               temp[i]=='5';
        }
    }
    int num = stoi(temp);
    return num;

}
int main()
{
    int n = 1003;
    cout << "Original number: " << n << endl;
    cout << "Replaced number: " << replace(n) << endl;
    
return 0;
}
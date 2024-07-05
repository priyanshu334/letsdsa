#include<iostream>
using namespace std;

void reach(int src, int dest){
    if(src == dest){
        cout<<"ghar me hu"<<endl;
        return;
    }
    src++;
    cout<<"abhi yaha hu"<<src<<endl;
    reach(src,dest);
}
int main()
{
 int    src=1;
   int dect =10;
   reach(src, dect);
return 0;
}
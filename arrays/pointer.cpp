#include<iostream>
using namespace std;
int main()
{
    int i =2 ;
    int *ptr = &i;
    cout << "The value of i is: " << i << endl;
    cout << "The memory address of i is: " << &i << endl;
    cout << "The value of the pointer ptr is: " << ptr << endl;
    cout << "The value pointed to by ptr is: " << *ptr << endl;
    cout<<"the type of pointer is"<<
return 0;
}
#include<iostream>
using namespace std;
template <class T>
void swap1(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
int a=1,b=2;
cout<<"Before swapping a and b values are"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
swap1(a,b);
cout<<"After swapping a and b values are"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
return 0;
}
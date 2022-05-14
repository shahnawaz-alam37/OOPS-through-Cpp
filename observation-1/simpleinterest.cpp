#include<iostream>
using namespace std;
inline int simple(int p,int t,int r){
    return (p*t*r)/100;
}
int main(){
    int p,t,r,si;
    cout<<"enter principle,rate and time:";
    cin>>p>>t>>r;
    si=simple(p,t,r);
    cout<<"simple interest="<<si;
    return 0;
}
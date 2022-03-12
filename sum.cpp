#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"enter the n values for sum of n numbers:";
    cin>>n;
    for (int i = 0; i <= n; i++){
        sum=sum+i;
    }
    cout<<"sum of n terms="<<sum;
    return 0;
}
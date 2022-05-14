#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter any number";
    cin>>a;
    if (a>0){
        cout<<"given number is positive";
    }
    else if(a==0){
        cout<<"given number is equals to zero";
    }
    else{
        cout<<"given number is negative";
    }
    return 0;
}
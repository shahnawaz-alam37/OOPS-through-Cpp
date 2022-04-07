#include<iostream>
using namespace std;
int main(){
    int count=0;
    int arr[10];
    cout<<"enter any 10 numbers:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {
            count++;
        }   
    }
    cout<<"there are "<<count<<" even numbers present";
    return 0;
}
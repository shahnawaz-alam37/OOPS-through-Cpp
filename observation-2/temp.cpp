#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(int x,int y){
        a=x;
        b=y;
    }
    ~demo(){
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
        cout<<"sum="<<a+b;
    }
};

int main(){
   demo obj(2,4);
   return 0;
}
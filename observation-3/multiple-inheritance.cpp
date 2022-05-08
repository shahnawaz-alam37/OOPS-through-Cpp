#include<iostream>
using namespace std;
class p1{
    public:
    int a=10;
};
class p2{
    public:
    int b=10;
};
class child:public p1,public p2{
    public:
        void sum(){
            cout<<a<<"+"<<b<<"="<<a+b;
        }
};
int main(){
    child obj;
    obj.sum();
    return 0;
}
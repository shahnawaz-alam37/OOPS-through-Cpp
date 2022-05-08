#include<iostream>
using namespace std;
class A{
    public:
        int a=37;
};
class B:public A{
    public:
        void disp(){
            cout<<"pin="<<a;
        }
};
int main(){
    B obj;
    obj.disp();
    return 0;
}
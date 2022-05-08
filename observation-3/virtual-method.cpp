#include<iostream>
using namespace std;
class A{
    public:
        virtual void disp(){
            cout<<"base class"<<endl;
        }
};
class B:public A{
    public:
        void disp(){
            cout<<"child class";
        }
};

int main(){
    A *p,ob;
    B ob2;
    p=&ob;
    p->disp();
    p=&ob2;
    p->disp();
    return 0;
}
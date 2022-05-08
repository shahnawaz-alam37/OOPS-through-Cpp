#include<iostream>
using namespace std;

class base{
    public:
        int a=10;
};
class p1: virtual public base{
    
};

class p2:virtual public base{
   
};
class child:public p1,public p2{
    public:
        void disp(){
            cout<<"base class value="<<a;
        }
};
int main(){
    child obj;
    obj.disp();
    return 0;
}
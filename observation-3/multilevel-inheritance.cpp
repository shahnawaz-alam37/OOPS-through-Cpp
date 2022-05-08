#include<iostream>
using namespace std;
class first{
    public:
        void f(){
            cout<<"level 1\n";
        }
};
class second:public first{
    public:
        void s(){
            cout<<"level 2\n";
        }
};
class third:public second{
    public:
        void t(){
            cout<<"level 3";
        }
};

int main(){
    third obj;
    obj.f();
    obj.s();
    obj.t();
    return 0;
}
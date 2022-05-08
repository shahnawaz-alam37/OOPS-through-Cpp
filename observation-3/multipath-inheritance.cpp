#include<iostream>
using namespace std;
class parent{
    public:
        float marks=15;
};
class p1:virtual public parent{
    public:
        float internal = 18;
};
class p2:virtual public parent{
    public:
        float asignments = 9;
};
class child:public p1,public p2{
    public:
        void disp(){
            cout<<"total = "<<marks+internal+asignments;
        }
};
int main(){
    child ob;
    ob.disp();
    return 0;
}
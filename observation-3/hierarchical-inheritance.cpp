#include<iostream>
using namespace std;
class p{
    protected:
        string name="shahnawaz";
};
class c1:protected p{};
class c2:protected p{};
class c3:protected p{
    public:
        void disp(){
            cout<<"Name:"<<name;
        }
};
int main(){
    c3 ob;
    ob.disp();
    return 0;
}
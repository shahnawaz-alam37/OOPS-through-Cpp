#include<iostream>
using namespace std;
class demo{
    int a;
    int b;
    public:
        demo(){//creating default constructor.
            a=10;
            b=20;
        }
        void disp(){
            cout<<"a="<<a<<endl;
            cout<<"b="<<b;
        }
};
int main(){
    demo ob;//constructor evokes after creation of object.
    ob.disp();
}
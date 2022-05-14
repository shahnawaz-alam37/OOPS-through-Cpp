#include<iostream>
using namespace std;
class demo {
    int a,b;
    public:
        demo(){}
        demo(int x,int y){
            a=x;
            b=y;
        }
        void disp(){
            cout<<"a="<<a<<endl;
            cout<<"b="<<b;
        }
};
int main(){
    demo ob(110,20);
    ob.disp();
    return 0;
}
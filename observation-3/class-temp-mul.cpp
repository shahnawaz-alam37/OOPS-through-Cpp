#include<iostream>
using namespace std;
template <class T1,class T2> class demo{//class template with multiple parameters
    T1 a;
    T2 b;
    public:
        demo(T1 i,T2 j){
            a=i;
            b=j;
        }
        void disp(){
            cout<<a<<" and "<<b<<endl;
        }
};

int main(){
    demo <int,int> obj(1,2);
    demo <double, char> obj1(12.5,'A');
    obj.disp();
    obj1.disp();
    return 0;
}
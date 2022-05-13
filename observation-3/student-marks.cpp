//total marks of a student
#include<iostream>
using namespace std;
template <class T1> class demo{
    T1 a;
    T1 b;
    public:
        demo(T1 i,T1 j){
            a=i;
            b=j;
        }
        void disp(){
            cout<<"Total marks="<<a+b<<endl;
        }
};

int main(){
    demo <int> obj(18,14);
    demo <double> obj1(19.5,17.5);
    obj.disp();
    obj1.disp();
    return 0;
}
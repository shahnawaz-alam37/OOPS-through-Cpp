#include<iostream>
using namespace std;
template <class t1,class t2> class demo{
    t1 a;
    t2 b;
    public:
        demo(t1 i,t2 j){
            a=i;b=j;
        }
        void sum(){
            cout<<"sum = "<<a+b<<endl;
        }
};
int main(){
    demo <float,float> obj(5.4,6.5);
    demo <int,int> obj1(10,10);
    obj.sum();  
    obj1.sum();
    return 0;
}
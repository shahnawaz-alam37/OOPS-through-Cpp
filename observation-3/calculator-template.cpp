#include<iostream>
using namespace std;
template <class T1,class T2> class demo{
    T1 a;
    T2 b;
    public:
        demo(T1 i,T2 j){
            a=i;
            b=j;
        }
        void cal(){
            cout<<"Numbers are:"<<a<<" "<<b<<endl;
            cout<<"Addition:"<<a+b<<endl;
            cout<<"substraction:"<<a-b<<endl;
            cout<<"Multiplication:"<<a*b<<endl;
            cout<<"Division:"<<a/b<<endl;
        } 
};
int main(){
    demo<int,int> obj1(4,3);
    demo<float,float> obj2(3.4,1.5);
    cout<<"Int results"<<endl;
    obj1.cal();
    cout<<"\nFloat results"<<endl;
    obj2.cal();
    return 0;
}
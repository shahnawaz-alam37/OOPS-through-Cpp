#include<iostream>
using namespace std;
class value{
    int a;
    int b;
    public:
        value(){}
        value(int x,int y){
            a=x;
            b=y;
        }
        void sum(value t1,value t2){
            a= t1.a + t2.a;
            cout<<"sum of first variables of two objects="<<a<<endl;
            b= t1.b + t2.b;
            cout<<"sum of second variables of two objects="<<b<<endl;
            
        }
};

int main(){
    value ob1(0,2),ob2(1,3),ob3;
    ob3.sum(ob1,ob2);
    return 0;
}
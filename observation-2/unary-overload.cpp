#include<iostream>
using namespace std;
class overload{
    int a=0;
    public:
        void disp(){
            cout<<"a="<<a<<endl;
        }        
        void operator ++(int){
            a++;
        }
};

int main(){
    overload obj;
    cout<<"before overloading"<<endl;
    obj.disp();
    obj++;
    cout<<"after overloading"<<endl;
    obj.disp();
    return 0;
}
#include<iostream>
using namespace std;
class demo
{
private:
    int pin;
public:
    demo(int x){
        pin=x;
        cout<<"pin="<<pin;
    }
    ~demo();
};
demo::~demo(){
    cout<<"\ndestroying object"<<endl;
}

int main(void){
    int a;
    cout<<"enter your pin:";
    cin>>a;
    demo ob(a);
    return 0;
}

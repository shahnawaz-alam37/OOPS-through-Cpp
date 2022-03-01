#include<iostream>
#include<math.h>
using namespace std;
class cal{
    float r;
    float pi=3.14;
    public:
    void area(){
        cout<<"enter the radius of the circle:";
        cin>>r;
        float a=pi*r*r;
        cout<<"\narea="<<a;
    }
    void circum(){
        cout<<"\nenter the radius of the circle:";
        cin>>r;
        float c=2*pi*r;
        cout<<"\ncircumference="<<c;
    }
};
int main(){
    cal ob[2];
    ob[0].area();
    ob[1].circum();
    return 0;
}
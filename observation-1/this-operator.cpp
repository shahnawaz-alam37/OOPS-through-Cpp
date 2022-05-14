#include<iostream>
using namespace std;
class demo{
    int a=12;
    public:
        void disp(int a){
            cout<<"member variable:"<<this->a<<endl;
            cout<<"parameter given for function:"<<a;
        }
};
int main(){
    demo ob;
    ob.disp(22);
    return 0;
}
#include<iostream>
using namespace std;
class demo{
    int a=10;
    public:
        friend void operator <<(ostream &out,demo &ob);
};
void operator <<(ostream &out,demo &ob){
    out<<"a = "<<ob.a;
}
int main(){
    demo obj;
    cout<<obj;
    return 0;
}
#include<iostream>
using namespace std;
class ref{
    private:
        int a=0;
    public:
        void value(ref &val,int x){
        val.a=val.a+x;
    }  
        void disp(){
            cout<<"a="<<a<<endl;
    }
};

int main(){
    int b=1;
    ref ob;
    ob.value(ob,b);
    ob.disp();
    return 0;
}

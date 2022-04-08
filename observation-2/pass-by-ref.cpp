#include<iostream>
using namespace std;
class ref{
    private:
        int a=0;
    public:
        void value(ref &val){
        val.a++;
    }  
        void disp(){
            cout<<"A="<<a<<endl;
    }
};

int main(){
    ref ob;
    cout<<"before increment:"<<endl;
    ob.disp();
    ob.value(ob);
    cout<<"after incrementing:"<<endl;
    ob.disp();
    return 0;
}

#include<iostream>
using namespace std;
class ref{
    private:
        int year=1;
    public:
        void value(ref &val){
        val.year++;
    }  
        void disp(){
            cout<<"Year="<<year<<endl;
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

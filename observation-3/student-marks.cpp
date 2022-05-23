//total marks of a student
#include<iostream>
using namespace std;
template <class T>
class demo{
    T a,b,c;
    public:
        demo(){
            cout<<"enter marks of student in  subjects";
            cin>>a>>b>>c;
        }
        void disp(){
            cout<<"Total marks="<<a+b+c<<endl;
        }
};

int main(){
    demo <int> ob;
    ob.disp();
    demo <float> obj;
    obj.disp();
    return 0;
}
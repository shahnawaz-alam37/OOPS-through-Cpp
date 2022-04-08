#include<iostream>
using namespace std;
class objarray{
    int age;
    public:
        void value(int num){
            age=num;
        }
        void disp(){
            cout<<age<<endl;
        }
};

int main(){
    objarray ob[2];
    int a,b;
    cout<<"enter age of first and second student:";
    cin>>a>>b;
    ob[1].value(a);
    ob[2].value(b);
    cout<<"age of first student=";
    ob[1].disp();
    cout<<"age of second student=";
    ob[2].disp();
    return 0;
}
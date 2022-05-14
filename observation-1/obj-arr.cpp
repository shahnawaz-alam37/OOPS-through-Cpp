#include<iostream>
using namespace std;
class user{
    int age;
    char name[20];
    public:
        void getdata(){
            cout<<"enter name:";
            cin>>name;
            cout<<"enter age:";
            cin>>age;
        }
        void putdata(){
            cout<<"name:"<<name<<endl;
            cout<<"age:"<<age<<endl;
        }
};
int main(){
    user ob[2];
    for(int i=0;i<3;i++){
        cout<<"student detail-"<<i+1<<endl;
        ob[i].getdata();
    }
    cout<<"\nshowing details\n";
    for(int i=0;i<3;i++){
        cout<<"student "<<i+1<<endl;
        ob[i].putdata();
    }
    return 0;
}

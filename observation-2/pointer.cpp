#include<iostream>
using namespace std;

class student{
    int age;
    public:
        student(){
            age=18;
        }
        void print(){
            cout<<"age="<<age;
        }
};

int main(){
    student *s1 ,ob;
    s1=&ob;
    s1->print();
    return 0;
}
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
    student *s1 = new student();
    s1->print();
    delete s1;
    return 0;
}
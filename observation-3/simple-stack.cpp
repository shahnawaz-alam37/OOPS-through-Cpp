#include <iostream>
#include <string>
using namespace std;
template <class T>
class Stack
{
    private:
        int top =-1;
        T st[100];
    public:
        void push(T i){
            cout<<i<<endl;
            st[++top] = i;
        }
        T pop(){
            return st[top--];
        }
};
int main ()
{
    Stack<int> int_stack;
    Stack<string> str_stack;
    cout<<"values pushed into the stack"<<endl;
    str_stack.push("world");
    str_stack.push("Hello");
    str_stack.push("welcome");
    int_stack.push(10);
    int_stack.push(20);
    cout<<"value popped from the stack"<<endl;
    cout << str_stack.pop() << endl;
    cout << str_stack.pop() << endl; 
    cout << str_stack.pop() << endl;
    cout << int_stack.pop() << endl;
    cout << int_stack.pop() << endl;
    return 0;
}
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
    int_stack.push(67);
    str_stack.push("world");
    str_stack.push("Hello");
        
    cout<<"values pushed into the stack"<<endl;
    cout << int_stack.pop() << endl;
    cout << str_stack.pop() << endl;
    cout << str_stack.pop() << endl;
    cout<<"value popped from the stack"<<endl;
    cout<<"Hello"<<endl;
    cout<<"world"<<endl;
    return 0;
}
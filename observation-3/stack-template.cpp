#include <iostream>
using namespace std;
template<class T>
#define MAX 10
class stack{
    int n;//tells the size of the stack
    int top;
    T array[MAX];
	public:
        stack(){//constructor
            n=10;
            top=-1;
        }
        void push(T a){
	        if(top==MAX-1){//this condition signifies that stack is full
                cout<<"Stack overflow"<<endl;
            }
            else{
                top=top+1;
                array[top]=a;    
            }
        }
        void pop(){
            if(top==-1){//condition for empty stack
                cout<<"Stack underflow"<<endl;
            }
            else{
                cout<<"\ndeleted element:"<<array[top];
                top=top-1;
            }
        }
        void display(){
            int j;
            for(j=0;j<=top;j++){
                cout<<array[j]<<" ";
            }
        }
        T stack_operations(){
            while(1){
                int j;
        	    cout<<"\n1.push\n2.pop\n3.display\n4.Exit\nEnter the choice:";
        	    cin>>j;
        	    switch(j){
        	    	case 1:
        	    		cout<<"Enter the value to push:";
        	    		T a;
        	    		cin>>a;
        	    		push(a);
        	    		break;
        	    	case 2:
        	    		pop();
        	    		break;
        	    	case 3:
        	    		display();
        	    		break;

        	    	default:exit(0);
        	    }  
            }
        }
};
int main()
{
    stack <int> obj1;
    stack <float> obj2;
	while(1)
    {
    	cout<<"\n\nSTACK OPERATIONS WITH CLASS TEMPLATES"<<endl;
        cout<<"1.Integer array\n2.Float array\nEnter the choice:";
    	int i;
    	cin>>i;
    	switch(i)
    	{
    		case 1:
    			obj1.stack_operations();
    			
    		case 2:
    			obj2.stack_operations();
    			
    		default:exit(0);
		}
    }
}
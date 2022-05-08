 #include<iostream>
using namespace std;
class A{
 	public:
 	int x=10;
};
class B : public A{
 	public:
 	   void disp(){
            cout<<"X="<<x<<endl;
        } 
};
class C{
 	public:
 	int y=20;
    void show(){
       cout<<"y="<<y<<endl;
    }
};
class D : public B, public C{
 	public:
 	void sum(){
 	    cout << "Sum= " << x + y;
 	}
};
int main(){
    D obj1;          
    obj1.disp();
    obj1.show();
    obj1.sum();
 	return 0;
}
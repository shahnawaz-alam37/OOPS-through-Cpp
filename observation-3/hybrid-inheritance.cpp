 #include<iostream>
using namespace std;//hybrid inheritance
class A{//combination of single and hirarchical
 	public:
 		int x=10;
};
class B : public A{
 	public:
		int y=20;
};
class c:public B{
 	public:
	void disp(){
		cout<<x<<endl;
	}
};
class D : public B{
 	public:
 	void sum(){
 	    cout <<y;
 	}
};
int main(){
    D obj1;
	c obj2;          
    obj2.disp();
    obj1.sum();
 	return 0;
}
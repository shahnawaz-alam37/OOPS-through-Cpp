#include<iostream>
using namespace std;
class demo{
    private:
        int a=37;
    public://access variables using friend function
        friend void disp(demo);
};
void disp(demo m){
    cout<<"pin:"<<m.a;    
}
 
int main(){
    demo ob;
    disp(ob);
}
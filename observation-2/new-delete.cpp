#include<iostream>
using namespace std;
class info{
    int s;
    public:
        int area(int x){
            s=x;
            int area=s*s;   
            return(area);
        }
};

int main(){
    info obj;
    int *p=new int;
    cout<<"enter the side of squar:";
    cin>>*p;
    cout<<"area = "<<obj.area(*p);
    delete p;
    return 0;
}
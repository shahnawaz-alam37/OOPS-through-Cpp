#include <iostream>
using namespace std;

int add(int x,int y){
    return(x+y);
}
double add(double x,double y){
    return (x+y);
}
int main(){
    cout<<"integer sum="<<add(2,3)<<endl;
    cout<<"float sum="<<add(1.9,1.5);
    return 0;
}
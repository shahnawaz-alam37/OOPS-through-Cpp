#include <iostream>  
using namespace std;  
template<class x,class y> 
void fun(x a,y b)  
{  
    cout << "Value of a is : " <<a<<endl;  
    cout << "Value of b is : " <<b<<endl;  
}  
  
int main()  
{  
   fun(15,12.3);  
   return 0;  
}  
#include<iostream>
using namespace std;
template <class T>
class demo{
    T *arr;
    public:
        demo(T var[]){//taking array elements of different datatypes
            arr=new T[3];
            for (int i = 0; i < 3; i++)
            {
                arr[i]=var[i];
            }
        }
        void disp(){
            for (int i = 0; i < 3; i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
        }
};

int main(){
    int arr[3]={1, 2, 3};
    float num[3]={1.1 ,2.2 ,3.3 };
    string str[3]={"name ","pin ","address "};
    demo<int> i(arr);
    demo <float> j(num);
    demo <string> k(str);
    i.disp();   
    j.disp();
    k.disp();
    return 0;
}
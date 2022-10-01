#include<bits/stdc++.h>
using namespace std;

class Complex{  //a+ib
    int a;  //Instance member variable
    int b;  // ''
    static float root2;  //static member variable, class member variable, decleared in class 
public:
    void set(int x,int y){  //Instance member function aka method
        int joey;   //local variable, garbage initially, till lifetime of function sum, memory alloted when sum() is called
        a=x;
        b=y;
    }
    void show(){
        static int c;   //static local variable, 0 initially, till lifetime of program, memory alloted @ v.start
        cout<<a<<"+i"<<b<<endl;
    }
    static float showroot(){    //static member func aka class member function
        return root2;
    }
};

float Complex::root2=1.414f;    //class member defined outside class, does not belong to an object but to whole class
//only one copy exist for whole lifetime, any obj can use same copy of class variable,
//can also be used with class name (only if variable are public)


int main(){
   //cout<<Complex::root2<<endl;  //cannot use with class name directly because it is private
   //can access with without obj and without public using static member function(only can acccess static memb var)
   cout<<Complex::showroot()<<endl;
}
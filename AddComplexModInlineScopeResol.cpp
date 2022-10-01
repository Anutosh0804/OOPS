#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a;
    int b;
    //a + ib
public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<"+i"<<b<<endl;
    }
    void mod();

    Complex sum(Complex c2){
        Complex c;
        c.set(a+c2.a ,b+c2.b);
        return c;
    }

};

inline void Complex::mod(){
    cout<<"Mod: "<<sqrt( a*a + b*b )<<endl;
}


int main(){
    Complex c1,c2;
    c1.set(3,4);
    c2.set(1,5);
    Complex c = c1.sum(c2);
    c.show();
}
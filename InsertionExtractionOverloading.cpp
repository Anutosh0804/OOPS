#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;
public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<"+i"<<b<<endl;
    }
    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);
};

ostream& operator <<(ostream& op,Complex c){
    op<<c.a<<"+i"<<c.b<<endl;
    return op; 
}
istream& operator >>(istream& dickin,Complex &c){
    dickin>>c.a>>c.b;
    return cin;
}


int main(){
    Complex c1;
    cin>>c1;
    cout<<c1;
}
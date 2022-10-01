#include<bits/stdc++.h>
using namespace std;

class A{
	public:
	A(){
		cout<<"Hello A\n";
	}
	~A(){
		cout<<"A died\n";
	}
};

class B:public A{
	public:
	B(){
		cout<<"Hello B\n";
	}
	~B(){
		cout<<"B died\n";
	}
};

int main(){
	B obj;
}
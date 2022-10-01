#include<iostream>
using namespace std;
class Fraction {
	private:
		int num, denom;
	public:
	Fraction(int x=1,int y=1) {
		num=x; denom=y;
	}
	Fraction(Fraction& f) {
		num=f.num; denom=f.denom;
	}
	void operator*=(Fraction& f2) {
		(*this).num=(*this).num*f2.num;
		(*this).denom=(*this).denom*f2.denom;
		cout<<num<<"/"<<denom;
		return;
	}
	void getdata() {
		cout<<"Enter the Numerator"<<endl;
		cin>>num;
		cout<<"Enter the Denominator"<<endl;
		cin>>denom;
	}
	void display() {
		cout << "Entered Fraction is :-";
		cout<<num<<"/"<<denom<<endl;
	}
};
	int main() {
	Fraction F1,F2,F3;
	F1.getdata();
	F2.getdata();
	F2.display();
	F1.display();
	cout<<"Result of Multiplication:- ";
	F1*=F2;
	return 0;
	}

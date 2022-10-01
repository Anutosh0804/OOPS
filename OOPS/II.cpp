#include <iostream>
using namespace std;
class Fraction
{
	int num, denom;
	public:
		void print();
		void input();
		void show();
		void operator-=(Fraction&);
};
void Fraction::input() {
	cout << "Enter the Numerator:-";
	cin >> num;
	cout << "Enter the Denominator:-";
	cin >> denom;
}
void Fraction::print() {
	cout<<"Result After Subtraction = "<<num<<"/"<<denom<<endl;
}
void Fraction:: show() {
	cout<<"Fraction is :- "<<num<<"/"<<denom<<endl;
}
void Fraction:: operator-=(Fraction& f) {
	num=num*f.denom - f.num*denom;
	denom=f.denom*denom;
}
int main() {
	Fraction f1, f2;
	f1.input();
	f2.input();
	f1.show();
	f2.show();
	f1-=f2;
	f1.print();
	return 0;
}


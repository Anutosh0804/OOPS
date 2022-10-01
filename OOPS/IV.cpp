#include<iostream>
using namespace std;
class cn {
	int r,i;
	public:
		void input();
		void add(cn&);
		void sub(cn&);
		void mul(cn&);
		void div(cn&);
};
void cn::input() {
	cout << "Enter Complex No.'s Real Part:-";
	cin >> r;
	cout << "Enter Complex No.'s Imaginary Part:-";
	cin >> i;
}
void cn::add(cn &c2)
{
	cout << "Addition Result = " << r+c2.r <<
	 "+" << i+c2.i << "i" << endl;
}
void cn::sub(cn &c2){
	cout << "Subtraction Result = " << r-c2.r <<
	 "+" << i-c2.i << "i" << endl;
}
void cn::mul(cn &c2){
	cout << "Multiplication Result = " << (r*c2.r - i*c2.i ) <<
	 "+" << (r*c2.i + i*c2.r) << "i" << endl;
}
void cn::div(cn &c2){
	int d = c2.r*c2.r + c2.i*c2.i;
	cout << "Division Result = " << (r*c2.r + i*c2.i) << "/" << d <<
	 "+" << (- r*c2.i + i*c2.r) << "i/" << d << endl;
}
int main() {
	cn c1, c2;
	c1.input();
	c2.input();
	c1.add(c2); 
	c1.sub(c2); 
	c1.mul(c2); 
	c1.div(c2);
}

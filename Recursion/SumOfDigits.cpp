#include<bits/stdc++.h>
using namespace std;
int SumOfDigits(int n) {
	if( n < 10 )
	return n;
	return ( n % 10 ) + SumOfDigits( n / 10);
}
int main() {
	cout << SumOfDigits(253);
}

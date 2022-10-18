#include<bits/stdc++.h>
using namespace std;
void PrintNTo1 ( int n ) {
	if ( !n ) return;
	cout << n << " ";
	PrintNTo1( n - 1 );
}
int main() {
	PrintNTo1(5);
}

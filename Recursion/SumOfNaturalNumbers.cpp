#include<bits/stdc++.h>
using namespace std;
int SumN ( int n ) {
	if ( !n )
	return 0;
	return n + SumN( n - 1 );
}
int main() {
	cout << SumN(5);
}

#include<bits/stdc++.h>
using namespace std;
int SumN ( int n, int k ) {
	if ( !n )
	return k;
	return SumN( n - 1, n + k );
}
int main() {
	cout << SumN(5, 0);
}

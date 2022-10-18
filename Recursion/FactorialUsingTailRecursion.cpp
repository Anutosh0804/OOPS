#include<bits/stdc++.h>
using namespace std;
int fac( int n, int k ) {
	if ( n == 0 || n == 1)
	return k;
	return fac( n - 1, n*k );
}
int main() {
	cout << fac(5, 1);
}

#include<bits/stdc++.h>
using namespace std;
int MaxCuts( int n, int a, int b, int c ) {
	if( !n )	return 0;
	if ( n < 0 ) return -1;
	int res1 = max( MaxCuts( n-a, a, b, c ), MaxCuts( n-b, a, b, c ) );
	int res = max ( res1, MaxCuts( n-c, a, b, c ) );
	if ( res == -1 ) return -1;
	return res + 1;
}
int main() {
	cout << MaxCuts(5, 2, 5, 1) << endl;
	cout << MaxCuts(23, 12, 9, 11) << endl;
	cout << MaxCuts(5, 4, 2, 6) << endl;
}

#include<bits/stdc++.h>
using namespace std;
void fun ( int n ) {
	if ( !n ) return ;
	fun( n - 1 );
	cout << n << "\n";
	fun( n - 1 );
}
int main() {
	fun(3);
	return 0;
}

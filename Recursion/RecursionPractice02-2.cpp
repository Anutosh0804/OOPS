#include<bits/stdc++.h>
using namespace std;
void fun ( int n ) {
	if ( !n ) return;
	fun( n / 2);
	cout << (n % 2);
}
int main() {
	fun(7);
}

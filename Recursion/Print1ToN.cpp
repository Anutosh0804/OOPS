#include<bits/stdc++.h>
using namespace std;
void Print1ToN ( int n ) {
	if ( !n ) return;
	Print1ToN(n - 1);
	cout << n;
}
int main() {
	Print1ToN(5);
}

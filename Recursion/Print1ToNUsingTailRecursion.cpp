#include<bits/stdc++.h>
using namespace std;
void Print1ToN ( int n, int k) {
	if ( n == 0 )
	return;
	cout << k;
	Print1ToN(n - 1, k + 1);
}
int main() {
	Print1ToN(5, 1); // Initially Passing k=1
}

#include<bits/stdc++.h>
using namespace std;
void fun1 ( int n ) {
	if(!n) return;
	cout << "GFG" << endl;
	fun1(n - 1);
}
int main() {
	fun1(2);
	return 0;
}

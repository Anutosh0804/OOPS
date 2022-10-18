#include<bits/stdc++.h>
using namespace std;
bool isPalin (string str, int start, int end) {
	if (start >= end)
	return true;
	return (str[start] == str[end]) && isPalin(str, start+1, end-1);
}
int main() {
	string str; cout << "Enter the String:\n";cin >> str;
	if ( isPalin(str, 0, str.length() - 1) )
	cout << "It's a Palindrone";	
	else
	cout << "Not a Palindrone";
}

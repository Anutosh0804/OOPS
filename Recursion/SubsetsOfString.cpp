#include<bits/stdc++.h>
using namespace std;
void subset(string s, string cur = "", int idx = 0) {
	if ( idx == s.length() ) 
	{
		cout << cur << endl;
		return;
	}
	subset(s, cur, idx+1);
	subset(s, cur+s[idx], idx+1);
}
int main() {
	subset("ABC");
}

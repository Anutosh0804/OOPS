#include<bits/stdc++.h>
#include<vector>
using namespace std;
int getLargest(vector<int> v){
	int n = v.size();
	for(int i = 0; i < n; i++){
		bool flag = true;
		for(int j = 0; j < n; j++){
			if(v[j] > v[i])
			{
				flag = false;
				break;
			}
		}
		if(flag)
		return i;
	}
	return -1;
}

int main() {
	vector<int> v {5, 10, 2, 8};
	cout << f(v);
}

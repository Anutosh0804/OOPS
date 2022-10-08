#include<bits/stdc++.h>
using namespace std;

int	remDups(vector<int> v){
	int n = v.size();
	int tmp[n];
	tmp[0] = v[0];
	int res = 1;
	for(int i = 0; i < n; i++){
		if(tmp[res - 1] != v[i])
		{
			tmp[res] = v[i];
			res++;
		}
	}
	for(int i = 0; i < res; i++)
		v[i] = tmp[i];
	return res;
}

int main() {
}
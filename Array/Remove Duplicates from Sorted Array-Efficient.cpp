#include<bits/stdc++.h>
using namespace std;

int	rempDups(vector<int> v){
	int res = 1;
	for(int i = 1; i < v.size(); i++){
		if(v[res - 1] != v[i])
		{
			v[res] = v[i];
			res++;
		}
	}
	return res;
}

int main() {
}
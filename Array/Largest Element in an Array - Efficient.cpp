#include<bits/stdc++.h>
using namespace std;
int getLargest(vector<int> v){
	int res = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] > v[res])
		res = i;
	}
	return res;
}

int main() {

}


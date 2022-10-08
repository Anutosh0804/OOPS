#include<bits/stdc++.h>
using namespace std;
int getLargest (vector<int> v) {
	int res = -1;
	for(int i = 0; i < v.size(); i++){
		if(v[i] > v[res])
		res = i;
	}
	return res;
}
int secondLargest(vector<int> v){
	int largest = getLargest(v);
	int res = -1;
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i] != v[largest])
		{
			if(res == -1)
			res = i;
		}
		else if (v[i] > v[res])
		res = i;
	}
	return res;
}

int main() {

}


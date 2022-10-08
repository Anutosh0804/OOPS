#include<bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> v){
	int res = -1; lar = 0;
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i] > v[lar])
		{
			res = lar;
			lar = i;
		}
		else if(v[i] != v[lar])
		{
			if (res == -1 || v[i] > v[res])
			res = i;
		}
	}
	return res;
}

int main() {

}

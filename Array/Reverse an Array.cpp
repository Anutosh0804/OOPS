#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v){
	int low = 0, high = v.size() - 1;
	while(low < high)
	{
		swap(v[low], v[high]);
		low++;
		high--;
	}
}

int main() {
	vector<int> v{10, 5, 7, 30};
	reverse(v);
	for(auto i: v)
		cout << i << " ";
}
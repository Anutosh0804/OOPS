#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> v){
	for(int i = 0; i < v.size(); i++)
	{
		for(int j = i; j < v.size(); j++)
		{
			if(v[j] < v[i])
			return false;
		}
	}
	return true;
}

int main() {

}

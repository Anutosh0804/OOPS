#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> v){
	for(int i = 1; i < v.size(); i++)
	{
		if(v[i] < v[i-1])
		return false;
	}
	return true;
}
int main() {

}

# Boats to Save people
//This Question is asked by DMI Finance for Intern Position.
// https://cppsecrets.com/users/22319897989712197103975756505164103109971051084699111109/Boats-to-Save-People.php
// The problem input is a string from which we have to extract the array for weights and a intger for limit.
// Implemented to extract the required data.
// Rest part can be done by using 2-Pointer Approach for which inputs can be vector v and integer lmt
#include<bits/stdc++.h>
using namespace std;
int main() {
	string ipt="100,200,300,400,500;30";
	vector<int> v;
	string s="";
	int lmt,i;
	for(i=0;i<ipt.size();i++){
		s+=ipt[i];
		if(ipt[i]==','){
			v.push_back(stoi(s));
			s="";
			continue;
		}
		if(ipt[i]==';'){
			v.push_back(stoi(s));
			s="";
			break;
		}
	}
	for(int j=i+1;j<ipt.size();j++){
		s+=ipt[j];
	}
	for(int x:v)
	cout<<x<<" ";
	cout<<endl<<stoi(s);
}

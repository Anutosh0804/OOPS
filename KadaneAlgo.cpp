#include<bits/stdc++.h>
using namespace std;

int ncube(vector<int>&A){
	int n=A.size();
	int best=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++)
				sum+=A[k];
			best=max(best,sum);
		}
	}
	return best;
}

int nsq(vector<int>&A){
	int n=A.size();
	int best=INT_MIN;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=A[j];
			best=max(sum,best);
		}
	}
	return best;
}

int n_aka_KadaneAlgo(vector<int>&A){
	int n=A.size();
	int best=INT_MIN,sum=0;
	for(int i=0;i<n;i++){
		sum=max(A[i],sum+A[i]);
		best=max(sum,best);
	}
	return best;
}

int n_aka_KadaneAlgo2(vector<int>&A){
	int n=A.size();
	int meh=0,msf=INT_MIN;
	for(int i=0;i<n;i++){
		meh+=A[i];
		(meh<A[i])?meh=A[i]:1;
		(msf<meh)?msf=meh:1;
	}
	return msf;
}

int maxSubarrayProduct(vector<int> &A){
    // max positive product
    // ending at the current position
    int MaxEnd = A[0];
 
    // min negative product ending
    // at the current position
    int minEnd = A[0];
 
    // Initialize overall max product
    int UltimateMax = A[0];
    /* Traverse through the array.
    the maximum product subarray ending at an index
    will be the maximum of the element itself,
    the product of element and max product ending previously
    and the min product ending previously. */
    for (int i=1;i<A.size();i++){
    	int temp=max({A[i], A[i] * MaxEnd, A[i] * minEnd});
        minEnd = min({A[i], A[i] * MaxEnd, A[i] * minEnd});
        MaxEnd = temp;
        UltimateMax = max(UltimateMax, MaxEnd);
    }
    return UltimateMax;
}

int main(){
	vector<int> A={-2,-3,4,-1,-2,1,5,-3};
	cout<<n_aka_KadaneAlgo2(A);
}
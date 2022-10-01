#include<bits/stdc++.h>
using namespace std;

void Merge(int *A,int *L,int *R,int nl,int nr){
    int i=0,j=0,k=0;
    while(i<nl && j<nr){
        if(L[i]<=R[j])
            A[k++]=L[i++];
        else
            A[k++]=R[j++];
    }

    while(i<nl)
        A[k++]=L[i++];
    while(j<nr) 
        A[k++]=R[j++];
}

void MergeSort(int *A,int n){
    if(n<2)
        return;
    int mid=n/2;

    //int L[mid];
    //int R[n-mid]; //This is bad way as we cannot delete this static array.

    //int *L=(int*)malloc(mid*sizeof(int));
    //int *R=(int*)malloc((n-mid)*sizeof(int));

    int *L= new int[mid];
    int *R= new int[n-mid];

    for(int i=0;i<mid;i++)
        L[i]=A[i];
    for(int i=mid;i<n;i++)
        R[i-mid]=A[i];
    MergeSort(L,mid);
    MergeSort(R,n-mid);
    Merge(A,L,R,mid,n-mid);
    free(L);
    delete R;
}

//ALL O(nlogn)
//n
//Stable
//Only comparision sort that is NOT Inplace

int main(){
    int arr[]={3,2,1,8};
    int n=sizeof(arr)/sizeof(arr[2]);
    MergeSort(arr,n);

    for(int &n:arr) cout<<n<<" ";
}
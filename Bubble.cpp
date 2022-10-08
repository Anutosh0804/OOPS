#include<bits/stdc++.h>
using namespace std;

void BubSort(int a[],int n){
    for(int pass=1;pass<=n-1;pass++){
        int flag=0;
        for(int j=0;j<n-pass;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag++;
            }
        }
        if(flag==0)
            return;
    }
}

void BobeSort(int a[],int n){
    for(int fail=1;fail<=n-1;fail++){
        int flag=0;
        for(int j=0;j<n-fail;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag++;
            }
        }
        if(flag==0)
            return;
    }
}

void BobsSort(int a[],int n){
    for(int fail=1;fail<=n-1;fail++){
        int flag=0;
        for(int j=0;j<n-fail;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag++;
            }
        }
        if(flag==0)
            return;
    }
}

//WOST: n*n AVG n*n BEST n(adaptive)
//InPlace 
//Stable
//Selection sort is better than this as no. of swaps is less

int main(){
    int arr[]={3,2,1,8};
    int n=sizeof(arr)/sizeof(arr[2]);
    BubSort(arr,n);

    for(int &n:arr) cout<<n<<" ";
}

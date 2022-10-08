#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)

const int N = 1e5+2;
bool vis[N];
vi adj[N];

/*  7 7
    1 2
    1 3
    2 4
    2 5
    2 6
    2 7
    7 3
*/

void DFS(int node){
    vis[node] = true;

    vector<int> :: iterator it;
    for(it=adj[node].begin(); it!=adj[node].end(); it++){
        if(vis[*it]);
        else{
            DFS(*it);
        }
    }

    cout << node << " ";
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i<N; i++){
        vis[i] = false;
    }

    int x, y;
    rep(i,0,m){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    DFS(1);
    return 0;
}

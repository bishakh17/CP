#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
// #define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> parents(n+1);
    vector<int> cats(n);
    for(int i=1; i<=n; i++) cin>>parents[i];
    for(int i=0; i<n; i++) cin>>cats[i];
    int m = log2(n)+1;

    vector<vector<int>> sparseTable(n+1, vector<int>(m,0));
    for(int i=1; i<=n; i++) sparseTable[i][0] = parents[i];
    for(int j = 1; j<m; j++){
        for(int i = 1; i<=n; i++){
            int x = sparseTable[i][j-1];
            if(x!=0) sparseTable[i][j] = sparseTable[x][j-1];
            else sparseTable[i][j] = 0;
        }
    }
    vector<int> vis(n+1,0);
    for(int i = 0; i<n; i++){
        if(vis[cats[i]]){
            cout(0);
            continue;
        }
        int x = cats[i];
        int ans = 1;
        for(int j = m-1; j>=0; j--){
            if(sparseTable[x][j]!=0 and vis[sparseTable[x][j]]==0){
                x = sparseTable[x][j];
                ans += pow(2,j);
            }
        }
        vis[x] = 1;
        cout(ans);
    }
}

int main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
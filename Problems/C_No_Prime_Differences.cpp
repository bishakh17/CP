#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<vector<int>> ans(n,vector<int>(m));
    if(n==4){
        int gg = 1;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                ans[j][i] = gg;
                gg++;
            }
        }
    }
    else{
        int gg = 1;
        int temp = n/2;
        if(n%2==0) temp--;
        for(int i = 0; i<=temp; i++){
            for(int j = 0; j<m; j++){
                ans[i][j] = gg;
                gg++;
            }
            gg+=m;
        }
        gg = m+1;
        for(int i = temp+1; i<n; i++){
            for(int j = 0; j<m; j++){
                ans[i][j] = gg;
                gg++;
            }
            gg+=m;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
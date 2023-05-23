#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int m; cin>>m;
    vector<vector<int>> a(m);
    for(int i = 0; i<m; i++){
        int n; cin>>n;
        for(int j = 0; j<n; j++){
            int x; cin>>x;
            a[i].push_back(x);
        }
    }
    vector<int> ans;
    vector<int> mp(50001,0);
    for(int i = m-1; i>=0; i--){
        int n = a[i].size();
        int t = 0;
        for(int j = 0; j<n; j++){
            if(mp[a[i][j]]==0 and !t){ans.push_back(a[i][j]); t = 1;}
            mp[a[i][j]] = 1;
        }
        if(!t){cout(-1); return;}
    }
    for(int i = ans.size()-1; i>=0; i--) cout<<ans[i]<<" ";
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
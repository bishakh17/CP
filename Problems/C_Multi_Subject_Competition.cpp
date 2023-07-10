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
    vector<vector<int>> a(m+1);
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        a[x].push_back(y);
    }
    for(int i=1;i<=m;i++){
        sort(a[i].begin(),a[i].end(),greater<int>());
    }
    int maxi = 0;
    unordered_set<int> s;
    for(int i = 1; i<=m; i++){
        int gg = a[i].size();
        if(!gg) continue;
        maxi = max(maxi,gg);
        s.insert(i);
        for(int j = 1; j<gg; j++){
            a[i][j]+=a[i][j-1];
        }
    }
    int ans = 0;
    for(int i = 0; i<maxi; i++){
        int sum = 0;
        unordered_set<int> temp;
        for(auto x: s){
            if(a[x].size()>i and a[x][i]>0){
                sum+=a[x][i];
            }
            else{
                temp.insert(x);
            }
        }
        for(auto x: temp) s.erase(x);
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
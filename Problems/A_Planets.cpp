#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; int c; cin>>n>>c;
    unordered_map<int,int> m;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        m[x]++;
    }
    int ans = 0;
    for(auto it : m){
        if(it.second>c) ans+=c;
        else ans+=it.second;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
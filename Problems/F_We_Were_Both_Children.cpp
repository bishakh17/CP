#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> temp(n+1,0);
    map<int,int> mp;
    for(int i = 0; i<n; i++){
        mp[a[i]]++;
    }
    for(auto i : mp){
        for(int j = i.first; j<=n; j+=i.first){
            temp[j]+=i.second;
        }
    }
    int ans = 0;
    for(int i = 1; i<=n; i++){
        ans = max(ans,temp[i]);
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
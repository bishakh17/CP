#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    unordered_map<int,int> mp;
    int maxi = 0;
    for(int i=0;i<n;i++){
        mp[a[i].first]++;
        maxi = max(maxi,mp[a[i].first]);
    } 
    if(maxi>k){cout("NO"); return;}
    cout("YES");
    sort(a.begin(),a.end());
    vector<int> ans(n);
    int color = 1;
    for(int i=0;i<n;i++){
        ans[a[i].second] = color;
        color++;
        if(color>k) color = 1;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
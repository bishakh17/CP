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
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>> pq;
    int l = 0; int ans = 0;
    for(int i = n-1; i>=0; i--){
        l+=v[i].second;
        pq.push(v[i].second);
        if(pq.size()>k){
            l-=pq.top();
            pq.pop();
        }
        ans = max(ans,l*v[i].first);
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
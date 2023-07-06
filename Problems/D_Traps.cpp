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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<pair<int,int>> b(n);
    for(int i=0;i<n;i++) b[i] = {a[i]+i,i};
    sort(b.begin(),b.end());
    for(int i = 0; i<k; i++){
        a[b[n-i-1].second] = 0;
    }
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i<n; i++){
        ans += a[i];
        if(a[i]) ans+=cnt;
        else cnt++;
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
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
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> pre(n,0);
    pre[0] = a[0];
    vector<int> post(n,0);
    post[n-1] = a[n-1]-(n-1);
    for(int i=1; i<n; i++){
        pre[i] = max(pre[i-1], a[i]+i);
    }
    for(int i=n-2; i>=0; i--){
        post[i] = max(post[i+1], a[i]-i);
    }
    int ans = 0;
    for(int i = 1; i<n-1; i++){
        ans = max(ans, a[i] + pre[i-1] + post[i+1]);
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
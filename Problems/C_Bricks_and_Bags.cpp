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
    sort(a.begin(),a.end());
    int ans = a[n-1]-a[0];
    for(int i = 1; i<=n-2; i++){
        ans = max(ans,a[n-1]+a[i]-2*a[i-1]);
    }
    for(int i = n-2; i>=1; i--){
        ans = max(ans,2*a[i+1]-a[0]-a[i]);
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
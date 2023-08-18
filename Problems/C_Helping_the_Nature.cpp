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
    int ans = 0;
    int curr = a[0];
    int right = 0;
    for(int i = 1; i<n; i++){
        if(a[i]==a[i-1]) continue;
        ans += abs(a[i]-a[i-1]);
        if(a[i]>a[i-1]) right += (a[i]-a[i-1]);
        curr = min(curr,a[i]-right);
    }
    ans+= abs(curr);
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
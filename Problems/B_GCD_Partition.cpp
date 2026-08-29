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
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum += a[i];
    }
    int curr = 0;
    int ans = 1;
    for(int i=0;i<n-1;i++) {
        curr += a[i];
        int t = __gcd(curr, sum - curr);
        ans = max(ans, t);
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
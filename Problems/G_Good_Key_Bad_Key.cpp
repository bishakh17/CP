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
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> pre(n,a[0]);
    for(int i = 1; i<n; i++) pre[i] = pre[i-1] + a[i];
    int  ans = 0;
    int cnt = 0;
    for(int i = n-1; i>=0; i--){
        ans = max(ans,cnt+(pre[i] - k*(i+1)));
        int j = i;
        int gg = 2;
        cnt = 0;
        while(j<n and j<i+35){
            cnt += a[j]/gg;
            gg = gg<<1;
            j++;
        }
    }
    ans = max(ans,cnt);
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
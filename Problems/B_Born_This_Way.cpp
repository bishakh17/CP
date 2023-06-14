#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,ta,tb,k; cin>>n>>m>>ta>>tb>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++) a[i]+=ta;
    if(k>=n || k>=m){
        cout(-1);
        return;
    }
    int ans = -1;
    for(int i=0; i<n; i++){
        int idx = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        if(idx+k>=m){
            cout(-1);
            return;
        }
        ans = max(ans, b[idx+k]+tb);
        k--;
        if(k==-1) break;
    } 
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    for(int i = 0; i < n; i++) cin>>a[i];
    vector<int> f(n-1, 1);
    for(int i = 1; i<n-1; i++) {
        if(a[i+1]-a[i]>a[i]-a[i-1]) f[i] = a[i+1]-a[i];
        f[i] = f[i] + f[i-1];
    }
    vector<int> b(n,1);
    for(int i = n-2; i>0; i--) {
        if(a[i]-a[i-1]>a[i+1]-a[i]) b[i] = a[i]-a[i-1];
        b[i] = b[i] + b[i+1];
    }
    int m; cin>>m;
    while(m--) {
        int x,y; cin>>x>>y;
        if(x<y) {
            int gg = 0;
            if(x-1>0) gg = f[x-2];
            cout(f[y-2]-gg);
        }
        else {
            int gg = 0;
            if(x<n) gg = b[x];
            cout(b[y]-gg);
        }
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
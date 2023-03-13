#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,w,h; cin>>n>>w>>h;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    if(h>w){cout("NO"); return;}
    int low = INT64_MIN;
    int high = INT64_MAX;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i<n; i++){
        int d1 = b[i] - a[i];
        int d2 = h-w;
        if(d1+d2>high or d1-d2<low){
            cout("NO");
            return;
        }
        low = max(low, d1+d2);
        high = min(high, d1-d2);
    }
    cout("YES");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
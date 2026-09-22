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
    for(int i = 0; i<n; i++) {
        int x; cin>>x;
        a[i] -= x;
    }
    sort(a.begin(), a.end());
    int r = n - 1;
    int ans = 0;
    for(int l = 0; l<n; l++) {
        while(r>l && a[l]>-a[r]) r--;
        ans += n - max(r,l) - 1;
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
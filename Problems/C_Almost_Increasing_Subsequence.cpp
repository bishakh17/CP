#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,q; cin>>n>>q;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> pl(n,0);
    for(int i = 1; i<n-1; i++){
        if(a[i]<=a[i-1] and a[i]>=a[i+1]) pl[i] = pl[i-1]+1;
        else pl[i] = pl[i-1];
    }
    pl[n-1] = pl[n-2];   

    for(int i = 0; i<q; i++){
        int l,r; cin>>l>>r;
        l--; r--;
        if(l==r) cout(1);
        else if(l+1==r) cout(2);
        else{
            int ans = (r-l+1) - (pl[r]-pl[l]);
            if(pl[r]!=pl[r-1]) ans++;
            cout(ans);
        }
    }

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int l,r; cin>>l>>r;
    int m = log2(r/l);
    int k1 = 0;
    int f1 = pow(2,m);
    k1 = r-f1*l;
    k1 = k1/f1;
    int k2 = -1;
    int f2 = f1*3/2;
    if(l*f2<=r){
        k2 = r-l*f2;
        k2 = k2/f2;
    }
    k1++;
    k2++;
    int ans = k1+m*k2;

    cout<<m+1<<" "<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 998244353;


void solve(){
    int l,r; cin>>l>>r;
    int ans = log2(r/l) + 1;
    int count = max(0ll, r/(1ll<<(ans-1)) - l + 1);
    count = count%M;
    if (ans > 1) {
        int count1 = max(0LL, r / (3LL * (1LL << (ans - 2))) - l + 1);
        count = (count + (ans - 1) * count1) % M;
    }

    cout<<ans<<" "<<count<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
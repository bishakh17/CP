#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> len(51,1);
void precompute_len(){
    for(int i=1;i<50;i++){
        len[i] = len[i-1]*2 + 1;
    }
}
int one(int n, int l, int r){
    if(n<=1) return n;
    int msb = 63 - __builtin_clzll(n);
    int left_len = len[msb-1];
    int ans = 0;
    int mid = n&1;
    n >>= 1;
    if(l<left_len+1) ans += one(n,l,min(r,left_len));
    if(r>left_len+1) ans += one(n,max(l-(left_len+1),1ll),r-(left_len+1));
    if(l<=left_len+1 && r>=left_len+1) ans += mid;
    return ans;
}

void solve(){
    int n,l,r; cin>>n>>l>>r;
    cout(one(n,l,r));
}

int32_t main(){
    fastio;
    // cin>>T;
    precompute_len();
    while(T--){
        solve();
    }
    return 0;
}
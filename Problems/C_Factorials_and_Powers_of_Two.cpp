#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int N = 16;

vector<int> factorial(N+1,1);
void precompute(){
    for(int i=1;i<N;i++){
        factorial[i] = factorial[i-1]*i;
    }
    factorial[N] = 0;
}
int dp(int i, int n){
    if(n==0) return 0;
    if(i==17) return INT_MAX;
    int ans = __builtin_popcountll(n);
    if(n-factorial[i]>=0) return min(ans,min(1+dp(i+1,n-factorial[i]),dp(i+1,n)));
    else return ans;
}

void solve(){
    int n; cin>>n;
    int ans = dp(0,n);
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    precompute();
    while(T--){
        solve();
    }
    return 0;
}
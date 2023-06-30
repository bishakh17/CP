#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int N = 1e3;
int M = 998244353;
int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}
vector<int> factorial(N+1,1);
void precompute(){
    for(int i=1;i<=N;i++){
        factorial[i] = modMul(factorial[i-1],i);
    }
}


void solve(){
    int n; cin>>n;
    if(n%2){
        cout(0);
        return;
    }
    int ans = factorial[n/2];
    ans = modMul(ans,ans);
    cout(ans);
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
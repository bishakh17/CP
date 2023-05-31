#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int N = 1e6;

int modMul(int a, int b, int M){
    return ((a%M)*(b%M))%M;
}

int modAdd(int a, int b, int M){
    return ((a%M)+(b%M))%M;
}

vector<int> factorial(N+1,1);
void precompute(int M){
    for(int i=1;i<=N;i++){
        factorial[i] = modMul(factorial[i-1],i,M);
    }
}


void solve(){
    int n,M; cin>>n>>M;
    int ans = 0;
    precompute(M);
    for(int i = 1; i<=n; i++){
        int x = modMul(n-i+1,factorial[i],M);
        x = modMul(x,factorial[n-i],M);
        x = modMul(x,n-i+1,M);
        ans = modAdd(ans,x,M);
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
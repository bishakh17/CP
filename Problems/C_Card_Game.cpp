#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 998244353;
int N = 60;

int modAdd(int a, int b){
    return ((a%M)+(b%M))%M;
}

int modSub(int a, int b){
    int ans = ((a%M)-(b%M))%M;
    if(ans<0) ans+=M;
    return ans;
}

int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}

int modPow(int a, int b){
    int ans = 1;
    while(b){
        if(b&1) ans = modMul(ans,a);
        a = modMul(a,a);
        b>>=1;
    }
    return ans;
}

int modInv(int a){
    return modPow(a,M-2);
}

int modDiv(int a, int b){
    return modMul(a,modInv(b));
}

vector<int> factorial(N+1,1);
void precompute(){
    for(int i=1;i<=N;i++){
        factorial[i] = modMul(factorial[i-1],i);
    }
}

int nCr(int n, int r){
    return modDiv(factorial[n],modMul(factorial[r],factorial[n-r]));
}

int nPr(int n, int r){
    return modDiv(factorial[n],factorial[n-r]);
}

int dp(int n, int t){
    if(n==2 and !t) return 1;
    if(n==2 and t) return 0;
    if(!t) return (nCr(n-1,n/2) + dp(n-2,1))%M;
    else return (nCr(n-2,n/2) + dp(n-2,0))%M;
}

void solve(){
    int n; cin>>n;
    int a = dp(n,0);
    int b = dp(n,1);
    cout<<a<<" "<<b<<" "<<1<<endl;
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
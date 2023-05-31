#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 1e9+7;
int N = 1e6;

int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}

int modAdd(int a, int b){
    return ((a%M)+(b%M))%M;
}

int modSub(int a, int b){
    int ans = ((a%M)-(b%M))%M;
    if(ans<0) ans+=M;
    return ans;
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
    if(r>n) return 0;
    return modDiv(factorial[n],modMul(factorial[r],factorial[n-r]));
}

int nPr(int n, int r){
    if(r>n) return 0;
    return modDiv(factorial[n],factorial[n-r]);
}

int dp(int i, int prev, int k, vector<int>& a, vector<vector<int>>& mp){
    if(i==64){
        int temp = __builtin_popcountll(prev);
        if(temp==k) return 1;
        else return 0;
    }
    if(mp[i][prev]!=-1) return mp[i][prev];
    int temp = prev & i;
    int ans = 0;
    if(__builtin_popcountll(temp)>=k){
        int gg = modPow(2,a[i])-1;
        gg = modMul(gg,dp(i+1,temp,k,a,mp));
        ans = modAdd(ans,gg);
    }
    ans = modAdd(ans,dp(i+1,prev,k,a,mp));
    return mp[i][prev] = ans;
}

void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(64,0);
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        a[x]++;
    }
    int prev = pow(2,7) - 1;
    vector<vector<int>> mp(64,vector<int>(128,-1));
    int ans = dp(0,prev,k,a,mp);
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
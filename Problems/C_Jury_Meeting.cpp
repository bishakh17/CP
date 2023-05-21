#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 998244353;
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
    if(n<r) return 0;
    return modDiv(factorial[n],modMul(factorial[r],factorial[n-r]));
}

int nPr(int n, int r){
    if(n<r) return 0;
    return modDiv(factorial[n],factorial[n-r]);
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int target = a[n-1];
    int ans = factorial[n];
    if(a[n-2]==target){cout(ans); return;}
    if(target-a[n-2]>1){cout(0); return;}
    int count = 0;
    for(int i = 0; i<n-1; i++){
        if(target-a[i]>1) count++;
    }
    int minus = 0;
    for(int i=0; i<=count; i++){
        minus = modAdd(minus,modMul(modMul(nCr(count,i),factorial[i]),factorial[n-i-1]));
    }
    cout(modSub(ans,minus));
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
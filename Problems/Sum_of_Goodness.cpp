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
    return modDiv(factorial[n],modMul(factorial[r],factorial[n-r]));
}

int nPr(int n, int r){
    return modDiv(factorial[n],factorial[n-r]);
}

void solve(){
    int n; cin>>n; 
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int ans = 0;
    for(int i = 0; i<n; i++){
        int l = i;
        int r = n-i-1;
        if(l<a[i]-1) continue;
        int low = nCr(l,a[i]-1);
        int high = modPow(2,r);
        ans = modAdd(ans,modMul(low,high));
    }
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
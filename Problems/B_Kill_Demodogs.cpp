#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 1e9+7;

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


void solve(){
    int n; cin>>n;
    int ans = modMul(n,modMul(n+1,2*n+1));
    ans = modDiv(ans,3);
    int x = modMul(n,n+1);
    x = modDiv(x,2);
    ans = modSub(ans,x);
    ans = modMul(ans,2022);
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
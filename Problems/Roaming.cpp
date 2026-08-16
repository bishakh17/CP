#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int M = 1e9+7;
int N = 4e5 + 1;

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


void solve(){
    int n,k; cin>>n>>k;
    int ans = nCr(2*n-1,n-1);
    if(k<n-1) {
        ans = 0;
        int minm = n-k; //min no of non empty rooms
        for(int m = minm; m <= n; m++){
            int ways = modMul(nCr(n, m), nCr(n-1, m-1));
            ans = (ans + ways) % M;
        }
    }
    cout<<ans<<endl;
    
}

int32_t main(){
    fastio;
    // cin>>T;
    precompute();
    while(T--){
        solve();
    }
    return 0;
}
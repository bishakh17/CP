#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 998244353;

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
    string s; cin>>s;
    int l = 1;
    int r = 1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) {
            l++;
        }
        else break;
    }
    if(l==n) {
        cout(modDiv(modMul(n,modAdd(n,1)),2)); 
        return;
    }
    for(int i=n-1;i>0;i--){
        if(s[i]==s[i-1]) {
            r++;
        }
        else break;
    }
    int ans = modAdd(1, modAdd(l, r));
    if(s[0]==s[n-1]) {
        int x = modMul(l, r);
        ans = modAdd(ans, x);
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
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 1e9+7;
int modAdd(int a, int b){
    return ((a%M)+(b%M))%M;
}
int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}
int modPow(int a, int b){
    int res = 1;
    while(b>0){
        if(b&1){
            res = modMul(res, a);
        }
        a = modMul(a, a);
        b = b>>1;
    }
    return res;
}


void solve(){
    int n,k; cin>>n>>k;
    int ans = 0;
    string s;
    while(k){
        if(k&1){
            s+='1';
        }else{
            s+='0';
        }
        k = k>>1;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            ans = modAdd(ans, modPow(n, i));
        }
    }
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
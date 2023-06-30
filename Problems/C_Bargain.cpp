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



void solve(){
    string s; cin>>s;
    int ans = 0;
    int n = s.size();
    int cnt = 0;
    for(int i = n-1; i>=0; i--){
        int x = s[i]-'0';
        ans = modAdd(ans,modMul(x,cnt));
        int temp = i*(i+1)/2;
        ans = modAdd(ans,modMul(temp,modMul(x,modPow(10,n-i-1))));
        cnt = modAdd(cnt,modMul(modPow(10,n-i-1),n-i));
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
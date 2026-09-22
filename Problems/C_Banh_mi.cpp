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
int helper(int count0, int count1){
    int ans = 0;
    ans += modSub(modPow(2,count1),1);
    ans = modMul(ans,modPow(2,count0));
    return ans;
}

void solve(){
    int n,q; cin>>n>>q;
    string s; cin>>s;
    vector<int> a(n+1,0);
    for(int i = 0; i<n; i++) a[i+1] = a[i] + (s[i]-'0');
    for(int i = 0; i<q; i++){
        int l,r; cin>>l>>r;
        int count1 = a[r] - a[l-1];
        int count0 = (r-l+1) - count1;
        cout(helper(count0, count1));
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 998244353;

int ncr(int n, int r){
    int res = 1;
    if(r>n-r) r = n-r;
    for(int i=0; i<r; i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int k = 1;
    int i = 0;
    while(i<n){
        int temp = min(a[i],min(a[i+1],a[i+2]));
        int l = 0;
        if(temp==a[i]) l++;
        if(temp==a[i+1]) l++;
        if(temp==a[i+2]) l++;
        k*=l;
        k = k%M;
        i = i+3;
    }
    int t = n/3;
    int ans = ncr(t,t/2)%M;
    ans *= k;
    cout(ans%M);

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
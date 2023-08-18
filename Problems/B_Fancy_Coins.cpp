#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int m,k,a,b; cin>>m>>k>>a>>b;
    int gg = m%k;
    int ans = 0;
    if(k>m){
        int t = m-a;
        if(t<=0){
            cout(0);
            return;
        }
        cout(t);
        return;
    }
    if(gg>a){
        ans+=gg-a;
        int t = m-gg;
        t/=k;
        if(t>b) ans+=(t-b);
        cout(ans);
        return;
    }
    a-=gg;
    m-=gg;
    int temp = a/k;
    m-=(temp*k);
    int t = m/k;
    if(t>b) ans+=(t-b);
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
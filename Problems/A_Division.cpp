#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int p,q; cin>>p>>q;
    if(p<q){cout(p); return;}
    if(p%q!=0){cout(p); return;}
    int ans = 1;
    int temp = q;
    for(int i=2;i*i<=q;i++){
        if(q%i==0){
            while(q%i==0) q/=i;
            int gg = p;
            while(gg%temp==0 and gg%i==0) gg/=i;
            if(gg%temp!=0) ans = max(ans,gg);
        }
    }
    if(q>1){
        int gg = p;
        while(gg%temp==0 and gg%q==0) gg/=q;
        if(gg%temp!=0) ans = max(ans,gg);
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
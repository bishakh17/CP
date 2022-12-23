#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b){cout(0); return;}
    if((a-l<x and r-a<x) or (b-l<x and r-b<x)){cout(-1); return;}
    if(abs(a-b)>=x){cout(1); return;}
    if(r-b>=x and r-a>=x){cout(2); return;}
    if(b-l>=x and a-l>=x){cout(2); return;}
    cout(3);
    return;
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
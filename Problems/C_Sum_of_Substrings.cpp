#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int l = -1; int r = -1;
    int one = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='1'){
            one++;
            if(l==-1) l = i;
            r = i;
        }
    } 
    int minus = 0;
    if(k>=n-r-1){
        k-=(n-r-1);
        minus+=10;
    }
    if(k>=l){
        minus++;
    }
    if(one==1) minus=min(minus,(int)10);
    if(one)cout(one*11-minus);
    else cout(0);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
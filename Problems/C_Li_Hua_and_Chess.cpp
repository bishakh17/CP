#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    cout<<'?'<<" "<<1<<" "<<1<<endl;
    cout.flush();
    int a; cin>>a;
    if(!a){cout<<'!'<<" "<<1<<" "<<1<<endl; return;}
    if(n==1){
        int i = 0;
        int j = a;
        cout<<'!'<<" "<<i+1<<" "<<j+1<<endl;
        return;
    }
    if(m==1){
        int i = a;
        int j = 0;
        cout<<'!'<<" "<<i+1<<" "<<j+1<<endl;
        return;
    }
    cout<<'?'<<" "<<2<<" "<<1<<endl;
    cout.flush();
    int b; cin>>b;
    if(!b){cout<<'!'<<" "<<2<<" "<<1<<endl; return;}
    if(a>b){
        int i = a;
        cout<<'?'<<" "<<a+1<<" "<<1<<endl;
        cout.flush();
        int c; cin>>c;
        int j = c;
        cout<<'!'<<" "<<i+1<<" "<<j+1<<endl;
        return;
    }
    else{
        int j = a;
        cout<<'?'<<" "<<1<<" "<<a+1<<endl;
        cout.flush();
        int c; cin>>c;
        int i = c;
        cout<<'!'<<" "<<i+1<<" "<<j+1<<endl;
        return;
    }
    
    
}

int32_t main(){
    // fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
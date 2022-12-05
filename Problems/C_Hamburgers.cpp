#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;



void solve(){
    string t;
    cin>>t;
    int B = 0,S = 0,C = 0;
    for(int i = 0; i<t.size(); i++){
        if(t[i]=='B') B++;
        if(t[i]=='S') S++;
        if(t[i]=='C') C++;
    }
    int b,s,c;
    cin>>b>>s>>c;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    int p;
    cin>>p;

    int ans = 0;
    int l = 0;
    int r = 1e13;
    while(l<=r){
        int m = l+(r-l)/2;
        int x = max(0ll,(B*m-b)*pb) + max(0ll,(S*m-s)*ps) + max(0ll,(C*m-c)*pc);
        if(x<=p){
            ans = max(ans,m);
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    cout(ans);
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
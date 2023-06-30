#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    string s; cin>>s; 
    int i = 0;
    while(i<n and s[i]=='1') i++;
    if(i==n){cout(0); return;}
    int prev = i;
    int ans = 0;
    while(i<n){
        if(s[i]=='1'){i++; continue;}
        if(i-prev==1) ans+=2;
        else if(i-prev==2) ans+=1;
        prev = i;
        i++;
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
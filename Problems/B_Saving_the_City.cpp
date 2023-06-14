#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int a,b; cin>>a>>b;
    string s; cin>>s;
    int n = s.size();
    int i = 0;
    while(i<n and s[i]=='0') i++;
    if(i==n){cout(0); return;}
    while(i<n and s[i]=='1') i++;
    if(i==n){cout(a); return;}
    int ans = a;
    while(i<n){
        int zeros_cnt = 0;
        while(i<n and s[i]=='0'){
            zeros_cnt++;
            i++;
        }
        if(i==n){cout(ans); return;}
        ans+=min(zeros_cnt*b,a);
        while(i<n and s[i]=='1') i++;
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
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int check(string& s, string& t, int l, int r){
    int n = s.size();
    int m = t.size();
    int i = 0;
    int j = 0;
    while(i<n and j<m){
        if(i==l){
            i = r+1;
            continue;
        }
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(j==m) return 1;
    else return 0;
}

void solve(){
    string s,t; cin>>s>>t;
    int ans = 0;
    int n = s.size();
    int m = t.size();
    for(int l = 0; l<n; l++){
        for(int r = l; r<n; r++){
            if(check(s,t,l,r)){
                ans = max(ans, r-l+1);
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    int t = -1;
    for(int i = 1; i<n; i++){
        if(s[i]=='L' and s[i-1]=='R') t = 0;
        if(s[i]=='R' and s[i-1]=='L' and t) t = i;
    }
    cout(t);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
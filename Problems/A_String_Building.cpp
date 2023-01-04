#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int n = s.size();
    int count = 1;
    for(int i = 1; i<n; i++){
        if(s[i]!=s[i-1] and count==1){cout("NO"); return;}
        else if(s[i]!=s[i-1] and count!=1) count = 1;
        else count++;
    }
    if(s[n-1]!=s[n-2] and count==1){cout("NO"); return;}
    cout("YES"); return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
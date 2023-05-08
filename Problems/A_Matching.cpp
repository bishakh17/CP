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
    int ans = 1;
    if(s[0]=='0'){
        cout<<0<<endl;
        return;}
    if(s[0]=='?') ans = ans*9;
    for(int i=1;i<s.size();i++){
        if(s[i]=='?') ans = ans*10;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
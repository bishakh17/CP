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
    char h = '0' , v = '0';
    int ans = 1;
    for(int i = 0; i<n; i++){
        if(s[i]=='L' || s[i]=='R'){
            if(s[i]!=h && h!='0') ans++, h = s[i], v = '0';
            if(h=='0') h = s[i];
        }
        else{
            if(s[i]!=v && v!='0') ans++, v = s[i], h = '0';
            if(v=='0') v = s[i];
        }
    }
    cout(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
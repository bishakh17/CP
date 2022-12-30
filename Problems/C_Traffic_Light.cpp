#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; char c; string s;
    cin>>n>>c>>s;
    if(c=='g'){cout(0); return;}
    int ans = 0, count = 0,idx = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='g'){idx=i; break;}
    }
    idx += n;
    for(int i = n-1; i>=0; i--){
        if(s[i]==c)ans = max(ans,idx-i);
        if(s[i]=='g') idx = i; 
    }
    cout(ans);
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    if(n==2){
        if(s[0]=='(' and s[1]==')'){
            cout("NO");
            return;
        }
    }
    int t = 0;
    for(int i = 1; i<n; i++){
        if(s[i]==s[i-1]) t = 1;
    }
    string ans;
    if(t){
        for(int i = 0; i<2*n; i++){
            if(i%2) ans += ')';
            else ans += '(';
        }
    }
    else{
        for(int i = 0; i<n; i++){
            ans += '(';
        }
        for(int i = 0; i<n; i++){
            ans += ')';
        }
    }
    cout("YES");
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
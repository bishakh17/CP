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
    int x; cin>>x;
    int n = s.size();
    string ans(n,'1');
    for(int i = 0; i<n; i++){
        if(s[i]=='0'){
            if(i-x>=0) ans[i-x] = '0';
            if(i+x<n) ans[i+x] = '0';
        }
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='1'){
            if(i-x>=0 && ans[i-x]=='1') continue;
            else if(i+x<n && ans[i+x]=='1') continue;
            else{
                cout<<-1<<endl;
                return;
            }
        }
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
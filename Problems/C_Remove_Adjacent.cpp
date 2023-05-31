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
    for(int i = 25; i>0; i--){
        char c = 'a'+i;
        char prev = c-1;
        int k = 1;
        while(k){
            string t;
            for(int j = 0; j<s.size(); j++){
                if(s[j]!=c) t+=s[j];
                else if(j==0 and s[j+1]!=prev) t+=s[j];
                else if(j==n-1 and s[j-1]!=prev) t+=s[j];
                else if(s[j-1]!=prev and s[j+1]!=prev) t+=s[j];
            }
            if(t.size()==s.size()) k = 0;
            else s = t;
        }
    }
    cout<<n-s.size()<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
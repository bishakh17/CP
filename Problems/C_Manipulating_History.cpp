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
    n*=2;
    vector<int> temp(26,0);
    for(int i = 0; i<=n; i++){
        string s; cin>>s;
        for(int i = 0; i<s.size(); i++){
            int x = s[i]-'a';
            temp[x]++;
        }
    }
    for(int i = 0; i<26; i++){
        if(temp[i]%2){
            char ans = i+'a';
            cout(ans);
            return;
        }
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
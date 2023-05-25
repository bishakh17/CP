#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s,t; cin>>s>>t;
    int n = s.size();
    int m = t.size();
    vector<vector<int>> mp(n,vector<int>(26,-1));
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<26; j++){
            if(s[i]==(char)(j+'a')) mp[i][j] = i;
            else if(i<n-1) mp[i][j] = mp[i+1][j];
            else mp[i][j] = -1;
        }
    }
    int ans = 1;
    int pos = 0;
    for(int i = 0; i<m; i++){
        int c = t[i]-'a';
        if(pos==n or mp[pos][c]==-1){
            if(mp[0][c]==-1){
                cout(-1);
                return;
            }
            ans++;
            pos = 0;
        }
        pos = mp[pos][c]+1;
    }
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
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];
    int one = 0;
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(i==j) continue;
            int gg = 0;
            for(int t = 0; t<m; t++){
                if(s[i][t]!=s[j][t]) gg++;
            }
            if(gg==1) count++;
        }
        if(!count){
            cout<<"No"<<endl;
            return;
        }
        if(count==1) one++;
    }
    if(one>2) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
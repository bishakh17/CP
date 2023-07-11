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
    string s; cin>>s;
    int k = s.size();
    vector<int> temp(k,0);
    for(int i=0;i<k;i++){
        if(i-m<0) continue;
        if(s[i-m]=='1' or temp[i-m]==1){
            temp[i] = 1;
        }
    }
    vector<int> ans(k,0);
    int gg = 0;
    int gg2 = 0;
    for(int i = 0; i<m; i++){
        if(s[i]=='1') gg++;
        ans[i] = gg;
        if(gg) ans[i]++;
    }
    gg2 = gg;
    for(int i = m; i<k; i++){
        if(s[i]=='1' and temp[i]==0) gg++;
        if(s[i-m]=='1' and temp[i-m]==0) gg--;
        if(s[i]=='1') gg2++;
        if(s[i-m]=='1') gg2--;
        ans[i] = ans[i-m] + gg;
        if(gg2) ans[i]++;
    }
    for(int i=0;i<k;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    string s,t; cin>>s>>t;
    vector<int> low(m,-1);
    vector<int> high(m,-1);
    int ans = 0;
    int i = 0; int j = 0;
    while(j<m){
        if(s[i]==t[j]){
            low[j] = i;
            j++;
        }
        i++;
    }
    i = n-1; j = m-1;
    while(j>=0){
        if(s[i]==t[j]){
            high[j] = i;
            j--;
        }
        i--;
    }
    for(int i = 1; i<m; i++){
        ans = max(ans,high[i]-low[i-1]);
    }
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
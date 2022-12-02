#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> teams(n);
    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        teams[i].first = x;
        teams[i].second = -y;
    }
    sort(teams.begin(),teams.end());
    auto p = teams[n-k];
    auto low = lower_bound(teams.begin(),teams.end(),p);
    auto up = upper_bound(teams.begin(),teams.end(),p);
    cout(up-low);
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
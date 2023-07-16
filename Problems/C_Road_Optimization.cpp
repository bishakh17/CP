#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void solve(){
    int n,k; cin>>n>>l>>k;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
    }
    for(int i=0; i<n; i++){
        cin>>a[i].second;
    }
    if(n==1){
        int gg = a[0].second*l;
        cout<<gg<<endl;
        return;
    }
    vector<vector<int>> mp(n+1, vector<int>(k+1, -1));
    for(int i=0; i<=n; i++){
        for(int j = 0; j<=i; j++){
            if(i==0){
                mp[i][j] = 0;
                continue;
            }
            int ans = INT_MAX;
            
        }
    }

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
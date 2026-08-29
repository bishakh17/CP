#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n, q; cin>>n>>q;
    vector<string> f(n);
    for(int i=0;i<n;i++) cin>>f[i];
    vector<vector<int>> temp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(f[i][j]=='*') temp[i][j] = 1;
            if(i>0) temp[i][j] += temp[i-1][j];
            if(j>0) temp[i][j] += temp[i][j-1];
            if(i>0 && j>0) temp[i][j] -= temp[i-1][j-1];
        }
    }
    while(q--) {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        x1--; y1--; x2--; y2--;
        int ans = temp[x2][y2];
        if(x1>0) ans -= temp[x1-1][y2];
        if(y1>0) ans -= temp[x2][y1-1];
        if(x1>0 && y1>0) ans += temp[x1-1][y1-1];
        cout(ans);
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
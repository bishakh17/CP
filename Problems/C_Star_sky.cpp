#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,q,c; cin>>n>>q>>c;
    vector<vector<int>> a(n, vector<int>(3));
    for(int i=0; i<n; i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    sort(a.begin(), a.end());
    vector<vector<vector<int>>> dp(101, vector<vector<int>>(101, vector<int>(11,0)));
    int k = 0;

    for(int t = 0; t<=c; t++){
        for(int j = 1; j<=100; j++){
            for(int i = 1; i<=100; i++){
                int temp = dp[i-1][j][t] + dp[i][j-1][t] - dp[i-1][j-1][t];
                dp[i][j][t] = temp;
                while(k<n and a[k][0] == i){
                    if(a[k][1] == j)dp[i][j][t] += (a[k][2] + t)%(c+1);
                    k++;
                }
            }
            k = 0;
        }
    }
    while(q--){
        int t,x1,y1,x2,y2; cin>>t>>x1>>y1>>x2>>y2;
        int ans = 0;
        t = t%(c+1);
        ans = dp[x2][y2][t] - dp[x1-1][y2][t] - dp[x2][y1-1][t];
        ans += dp[x1-1][y1-1][t];
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
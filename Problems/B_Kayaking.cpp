#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define F first
#define S second
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    n = 2*n;
    vector<int> a(n);
    for(int i=0;i<n;i++) { cin>>a[i]; }
    sort(a.begin(), a.end());
    int ans = INT64_MAX;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++) {
            if(i == j) continue;
            pair<int,int> temp = {-1,-1};
            int curr = 0;
            for(int k = 0; k<n; k++){
                if(k == i || k == j) continue;
                if(temp.F == -1) temp.F = a[k];
                else if(temp.S == -1) temp.S = a[k];
                else {
                    curr += abs(temp.F - temp.S);
                    temp.S = -1;
                    temp.F = a[k];
                }
            }
            curr += abs(temp.F - temp.S);
            ans = min(ans, curr);
        }
    }
    cout(ans);
}

int32_t main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
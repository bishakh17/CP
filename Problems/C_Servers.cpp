#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,q; cin>>n>>q;
    vector<pair<pair<int,int>,int>> v(q);
    for(int i=0;i<q;i++){
        cin>>v[i].first.first>>v[i].first.second>>v[i].second;
    }
    sort(v.begin(), v.end());
    vector<int> temp(n+1,-1);
    for(int i=0;i<q;i++){
        int cnt = 0;
        for(int j=1; j<=n; j++) {
            if(temp[j]<v[i].first.first) cnt++;
            if(cnt==v[i].first.second) break;
        }
        if(cnt!=v[i].first.second) {
            cout(-1);
            continue;
        }
        int ans = 0;
        for(int j = 1; j <= n; j++) {
            if(temp[j]<v[i].first.first) {
                temp[j] = v[i].second + v[i].first.first - 1;
                ans += j;
                cnt--;
            }
            if(cnt==0) break;
        }
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
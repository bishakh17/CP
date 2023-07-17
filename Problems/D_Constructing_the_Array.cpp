#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    vector<int> ans(n);
    priority_queue<pair<int,int>> q;
    q.push({n,0});
    int cnt = 1;
    while(cnt<=n){
        auto curr = q.top();
        q.pop();
        int l = -curr.second;
        int r = l+curr.first-1;
        int mid = (l+r)/2;
        ans[mid] = cnt;
        cnt++;
        if(mid-l>0){
            q.push({mid-l,-l});
        }
        if(r-mid>0){
            q.push({r-mid,-mid-1});
        }
    }
    for(int i=0;i<n;i++){
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
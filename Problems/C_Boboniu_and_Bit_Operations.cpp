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
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int ans = 0;
    unordered_set<int> s;
    while(s.size()!=n){
        int temp1 = ans;
        int idx = -1;
        for(int i = 0; i<n; i++){
            if(s.find(i)!=s.end()) continue;
            int temp2 = ans|(a[i]&b[0]);
            for(int j = 1; j<m; j++){
                temp2 = min(temp2,ans|(a[i]&b[j]));
            }
            if(temp2>=temp1){
                temp1 = temp2;
                idx = i;
            }
        }
        s.insert(idx);
        ans = temp1;
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
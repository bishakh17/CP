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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int q; cin>>q;
    vector<vector<int>> v(q);
    for(int i = 0; i<q; i++){
        int x; cin>>x;
        v[i].push_back(x);
        if(x==1){
            int y,z; cin>>y>>z;
            v[i].push_back(y);
            v[i].push_back(z);
        }
        else{
            int y; cin>>y;
            v[i].push_back(y);
        }
    }
    vector<int> two(q,-1);
    for(int i = q-1; i>=0; i--){
        if(v[i][0]==2){
            if(i<q-1) two[i] = max(two[i+1],v[i][1]);
            else two[i] = v[i][1];
        }
        else{
            if(i<q-1) two[i] = two[i+1];
        }
    }
    vector<int> one(n+1,-1);
    for(int i = 0; i<q; i++){
        if(v[i][0]==1){
            one[v[i][1]] = i;
        }
    }
    for(int i = 1; i<=n; i++){
        if(one[i]!=-1){
            int ans = v[one[i]][2];
            ans = max(ans,two[one[i]]);
            cout<<ans<<" ";
        }
        else{
            int ans = max(two[0],a[i-1]);
            cout<<ans<<" ";
        }
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    vector<int> b(n);
    int sm = 0;
    vector<vector<int>> v(n+1);
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        sm+=b[i];
    }
    for(int i = 0; i<n; i++){
        v[a[i]].emplace_back(b[i]);
    }
    for(int i = 1; i<=n; i++){
        if(v[i].size()!=0) sort(v[i].begin(),v[i].end());
    }
    vector<vector<int>> sm_v(n+1);
    for(int i = 1; i<=n; i++){
        int sz = v[i].size();
        sm_v[i].emplace_back(0);
        for(int j = 0; j<sz; j++){
            sm_v[i].emplace_back(sm_v[i][j]+v[i][j]);
        }
    }
    for(int i = 1; i<=n; i++){
        int cnt = 0;
        unordered_set<int> del;
        for(auto x : s){
            int sz = v[x].size();
            if(sz<i){
                sm-=sm_v[x][sz];
                del.insert(x);
                continue;
            }
            int temp = sz%i;
            cnt+=sm_v[x][temp];
        }
        for(auto x : del) s.erase(x);
        cout<<sm-cnt<<" ";
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
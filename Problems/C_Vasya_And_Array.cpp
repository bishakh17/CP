#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n, m; cin>>n>>m;
    vector<pair<int,int>> a;
    vector<pair<int,int>> b;
    for(int i = 0; i<m; i++){
        int t,l,r;
        cin>>t>>l>>r;
        if(t == 1) a.push_back({l-1,r-1});
        else b.push_back({l-1,r-1});
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<pair<int,int>> mergeda;
    mergeda.push_back(a[0]);
    for(int i = 1; i<a.size(); i++){
        if(mergeda.back().second >= a[i].first){
            mergeda.back().second = max(mergeda.back().second, a[i].second);
        } else {
            mergeda.push_back(a[i]);
        }
    }
    int i = 0;
    int j = 0;
    vector<int> ans(n,1);
    while(i < mergeda.size() && j < b.size()){
        if(mergeda[i].first <= b[j].first){
            for(int t = mergeda[i].first; t <= mergeda[i].second; t++){
                if(ans[t] == 1) {
                    ans[t] = 1e4;
                }
            }
            i++;
        }
        else {
            int gg = 0;
            for(int t = b[j].first; t <= b[j].second; t++){
                if(ans[t] == 1 && t!=b[j].first && gg == 0) {
                    ans[t] = ans[t-1] - 1;
                    gg = 1;
                }
                else if(ans[t] == 1) ans[t] = 1e4;
            }
            if(!gg){
                cout("NO");
                return;
            }
            j++;
        }
    }
    while(i < mergeda.size()){
        for(int t = mergeda[i].first; t <= mergeda[i].second; t++){
            if(ans[t] == 1) {
                ans[t] = 1e4;
            }
        }
        i++;
    }
    while(j < b.size()){
        int gg = 0;
        for(int t = b[j].first; t <= b[j].second; t++){
            if(ans[t] == 1 && t!=b[j].first && gg == 0) {
                ans[t] = ans[t-1] - 1;
                gg = 1;
            }
            else if(ans[t] == 1) ans[t] = 1e4;
        }
        if(!gg){
            cout("NO");
            return;
        }
        j++;
    }
    cout("YES");
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
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
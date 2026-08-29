#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
vector<int> temp(5e4+1,0);

void clear (vector<vector<int>>& a) {
    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a[i].size(); j++) {
            temp[a[i][j]] = 0;
        }
    }
}

void solve(){
    int m; cin>>m;
    vector<vector<int>> a(m);
    for(int i = 0; i < m; i++) {
        int x; cin>>x;
        a[i].resize(x);
        for(int j = 0; j < x; j++) {
            cin>>a[i][j];
        }
    }
    vector<int> ans(m);
    for(int i = m-1; i >= 0; i--) {
        for(int j = 0; j < a[i].size(); j++) {
            if(temp[a[i][j]] == 0) {
                ans[i] = a[i][j];
            }
            temp[a[i][j]] = 1;
        }
        if(ans[i] == 0) {
            cout<<-1<<endl;
            clear(a);
            return;
        }
    }
    for(int i = 0; i < m; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    clear(a);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
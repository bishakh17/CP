#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int n = s.size();
    int m; cin>>m;
    string l; cin>>l;
    string r; cin>>r;
    vector<vector<int>> temp(10);
    for(int i = 0; i<n; i++){
        temp[s[i]-'0'].push_back(i);
    }
    int idx = -1;
    for(int i = 0; i<m; i++){
        int high = r[i]-'0';
        int low = l[i]-'0';
        int max_idx = -1;
        for(int j = low; j<=high; j++){
            int pos = upper_bound(temp[j].begin(),temp[j].end(),idx)-temp[j].begin();
            if(pos==temp[j].size()){
                cout("YES");
                return;
            }
            max_idx = max(max_idx,temp[j][pos]);
        }
        idx = max_idx;
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
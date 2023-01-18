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
    unordered_map<int,int> s;
    vector<vector<int>> nums(n);
    for(int i = 0; i<n; i++){
        int k; cin>>k;
        for(int j = 0; j<k; j++){
            int x; cin>>x;
            nums[i].push_back(x);
        }
    }
    for(int i = 0; i<n; i++){
        int k = nums[i].size();
        for(int j = 0; j<k; j++){
            s[nums[i][j]]++;
        }
    }
    for(int i = 0; i<n; i++){
        int k = nums[i].size();
        int t = 1;
        for(int j = 0; j<k; j++){
            if(s[nums[i][j]]==1) t=0;
        }
        if(t) {cout("Yes"); return;}
    }
    cout("No");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
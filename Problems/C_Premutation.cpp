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
    vector<vector<int>> nums(n,vector<int>(n-1));
    unordered_map<int,int> m;
    int first = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            cin>>nums[i][j];
            if(j==0){
                m[nums[i][0]]++;
                if(m[nums[i][0]]>=2) first = nums[i][0];
            }
        }
    }
    for(int i = 0; i<n; i++){
        if(nums[i][0]!=first){
            cout<<first<<" ";
            for(int j = 0; j<n-1; j++){
                cout<<nums[i][j]<<" ";
            }
            cout<<endl;
            return;
        }
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
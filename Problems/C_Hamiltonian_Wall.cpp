#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

bool f(int i, int j, vector<vector<char>>& nums){
    if(j==nums[0].size()) return true;
    if(nums[i][j]=='W') return false;
    if(nums[1-i][j]=='B') return f(1-i,j+1,nums);
    else return f(i,j+1,nums);
}

void solve(){
    int m; cin>>m;
    vector<vector<char>> nums(2,vector<char>(m));
    for(int i = 0; i<2; i++){
        for(int j = 0; j<m; j++){
            cin>>nums[i][j];
        }
    }
    if(f(0,0,nums) or f(1,0,nums)) cout("YES");
    else cout("NO");
    return;




    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
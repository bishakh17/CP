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
    unordered_map<int,int> nums;
    for(int i = 0; i<m; i++){
        int x,y;
        cin>>x>>y;
        int a = min(x,y);
        int b = x+y-a;
        if(nums.find(a)==nums.end()) nums[a] = b;
        else nums[a] = min(nums[a],b);
    }
    int ans = 0;
    int r = n+1;
    for(int i = n; i>0; i--){
        if(nums.find(i)!=nums.end()) r = min(r,nums[i]);
        ans+=r-i;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    vector<int> nums(n+1,n+1);
    for(int i = 0; i<m; i++){
        int x,y;
        cin>>x>>y;
        int a = min(x,y);
        int b = x+y-a;
        nums[a] = min(nums[a],b);
    }
    int ans = 0;
    int r = n+1;
    for(int i = n; i>0; i--){
        r = min(r,nums[i]);
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
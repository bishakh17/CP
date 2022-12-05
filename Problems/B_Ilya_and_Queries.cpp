#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int m;
    cin>>m;
    vector<int> nums(n,0);
    for(int i = 1; i<n; i++){
        if(s[i]==s[i-1]) nums[i] = nums[i-1]+1;
        else nums[i] = nums[i-1];
    }
    for(int i = 0; i<m; i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        cout(nums[r]-nums[l]);
    }
    return;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
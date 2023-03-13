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
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    priority_queue<int> q;
    int sum = 0;
    int ans = 0;
    for(int i = m; i<n; i++){
        sum+=nums[i];
        if(nums[i]<0) q.push(-nums[i]);
        if(sum<0){
            sum+=2*q.top();
            q.pop();
            ans++;
        }
    }
    vector<int> prefix_sum(m+1,0);
    for(int i = 1; i<=m; i++){
        prefix_sum[i] = prefix_sum[i-1]+nums[i-1];
    }
    priority_queue<int> q2;
    for(int i = m-1; i>=0; i--){
        while(prefix_sum[i+1]<prefix_sum[m]){
            prefix_sum[m]-=2*q2.top();
            q2.pop();
            ans++;
        }
        if(nums[i]>0) q2.push(nums[i]);
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
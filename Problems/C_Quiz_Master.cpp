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
    sort(nums.begin(),nums.end());
    vector<vector<int>> factors(n);
    for(int i = 0; i<n; i++){
        int j = 1;
        while(j*j<=nums[i] and j<=m){
            if(nums[i]%j==0){
                factors[i].push_back(j);
                if(nums[i]/j<=m) factors[i].push_back(nums[i]/j);
            }
            j++;
        }
    }
    vector<int> temp(m+1,0);
    int ans = INT64_MAX;
    int count = 0;
    int i = 0;
    int j = 0;
    for(auto x : factors[0]){
        temp[x]++;
        if(temp[x]==1) count++;
    }
    while(j<n){
        if(count==m){
            ans = min(ans,nums[j]-nums[i]);
            for(auto x : factors[i]){
                temp[x]--;
                if(temp[x]==0) count--;
            }
            i++;
        }
        else{
            j++;
            if(j==n){break;}
            for(auto x : factors[j]){
                temp[x]++;
                if(temp[x]==1) count++;
            }
        }
    }
    if(ans==INT64_MAX) cout(-1);
    else cout(ans);


}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
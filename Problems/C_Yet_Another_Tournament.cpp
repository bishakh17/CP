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
    vector<int> temp = nums;
    sort(nums.begin(),nums.end());
    int i = 0;
    while(m>=0 and i<n){
        if(m<nums[i]) break;
        m-=nums[i];
        i++;
    }
    if(i>n-1){cout(1); return;}
    if((i==0 and m==temp[i]) or temp[i]<nums[i] or (i>0 and temp[i]<=nums[i-1])){cout(n-i);return;}
    else if(m!=0){
        if(i>0 and m+nums[i-1]>=temp[i]){cout(n-i);return;}
    }
    cout(n-i+1);
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
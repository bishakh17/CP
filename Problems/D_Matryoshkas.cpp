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
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int i = 0;
    int ans = 0;
    int count = 1;
    int gg = 0;
    while(i+1<n and nums[i]==nums[i+1]){
        count++;
        i++;
    }
    i++;
    ans += count;
    while(i<n){
        int temp = 1;
        if(nums[i]!=nums[i-1]+1) count = 0;
        while(i+1<n and nums[i]==nums[i+1]){
            temp++;
            i++;
        }
        i++;
        if(count<temp) ans = ans + (temp-count);
        count = temp;
        
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
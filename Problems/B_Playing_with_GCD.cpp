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
    vector<int> temp(n+1);
    temp[0] = nums[0];
    temp[n] = nums[n-1];
    for(int i = 1; i<n; i++){
        temp[i] = (nums[i-1]*nums[i])/(__gcd(nums[i-1],nums[i]));
    }
    for(int i = 0; i<n; i++){
        if(nums[i]!=__gcd(temp[i],temp[i+1])){cout("NO");return;}
    }
    cout("YES");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
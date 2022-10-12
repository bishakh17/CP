#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    long long ans = 0;
    for(int i = 1; i<n; i++){
        if(nums[i]<nums[i-1]) ans+=nums[i-1]-nums[i];
    }
    cout<<ans<<endl;
}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
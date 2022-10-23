#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long n; 
    cin>>n;
    vector<long long> nums(n);
    for(long long i = 0; i<n; i++){
        cin>>nums[i];
    }
    long long ans = 0;
    for(long long i = 1; i<n-1; i++){
        if(nums[i]>nums[i-1] and nums[i]>nums[i+1]){
            if(i+2<n and nums[i+2]>nums[i]){
                nums[i+1] = nums[i+2];
            }
            else{
                nums[i+1] = nums[i];
            }
            ans++;
        }
    }
    cout<<ans<<endl;
    for(long long i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    long long T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
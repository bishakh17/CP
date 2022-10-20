#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    unordered_map<int,int> nums;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        nums[x] = i+1;
    }
    int ans = -1;
    for(int i = 1; i<1001; i++){
        for(int j = 1; j<1001; j++){
            if(__gcd(i,j)==1 and nums[i] and nums[j]) {
                ans = max(ans,nums[i]+nums[j]);
            }
        }
    }
    cout<<ans<<endl;
    return;

}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
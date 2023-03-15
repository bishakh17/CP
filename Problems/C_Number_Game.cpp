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
    int t = n/2;
    sort(nums.begin(),nums.end());
    int ans = 0;
    for(int k = n/2+1; k>=0; k--){
        int start = 0;
        int end = n;
        int stage = k;
        while(stage>=1){
            int index = upper_bound(nums.begin()+start,nums.begin()+end,stage) - nums.begin();
            if(index == start) break;
            start++;
            end = index-1; 
            stage--;
        }
        if(stage==0){ans = k; break;}
    }
    cout<<ans<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
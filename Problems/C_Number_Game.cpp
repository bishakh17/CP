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
    int t;
    if(n%2) t = n/2+1;
    else t = n/2;
    sort(nums.begin(),nums.end(),greater<int>());
    int k = t;
    while(t){
        int i = 0;
        int j = n-1;
        while(i<=j and t){
            while(nums[i]>t and i<j){
                i++;
            }
            if(nums[i]>t) break;
            i++;
            j--;
            t--;
        }
        if(!t) break;
        k--;
        t = k;
    }
    cout<<k<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
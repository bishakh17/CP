#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int t = 1;
    unordered_map<int,int> nums;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        nums[temp]++;
        if(nums[temp]>1) t = 0;
    }
    if(t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
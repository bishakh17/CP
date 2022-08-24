#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n,0);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int t = 0;
    for(int i = 1; i<n ; i++){
        if(t==1 and nums[i]>nums[i-1]){
            cout<<"NO"<<endl;
            return;
        }
        else if(t==0 and nums[i]<nums[i-1]) t = 1;
    }
    cout<<"YES"<<endl;

}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
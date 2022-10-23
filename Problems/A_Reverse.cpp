#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> temp(n);
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        nums[i] = x;
        temp[i] = x;
    }
    sort(temp.begin(),temp.end());
    int i = 0;
    while(i<n and temp[i]==nums[i]){
        i++;
    }
    if(i==n){
        for(int i = 0; i<n; i++){
            cout<<nums[i]<<" ";
        }
        return;
    }
    int x = temp[i];
    int j = i;
    while(nums[j]!=x){
        j++;
    }
    reverse(nums.begin()+i,nums.begin()+j+1);
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
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
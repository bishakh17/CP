#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int t = 0;
    int changes = 0;
    int l = 0,r = 0;
    for(int i = 1; i<n; i++){
        int k = t;
        if(nums[i]>nums[i-1]) t = 1;
        else t = -1;
        if(t!=k){
            changes++;
            if(changes==2) l = i-1;
            if(changes==3) r = i-1;
            if(changes>3){
                cout<<"no"<<endl;
                return;
            }
        }
    }
    if(changes<2){
        cout<<"yes"<<endl;
        if(t==-1){
            l=0;
            r=n-1;
        }
        else{
            l=0;
            r=0;
        }
    }
    if(changes==2){
        if(t==-1){
            if(nums[n-1]>nums[l-1]){
                cout<<"yes"<<endl;
                r = n-1;
            }
            else{
                cout<<"no"<<endl;
                return;
            }
        }
        if(t==1){
            if(nums[0]<nums[l+1]){
                cout<<"yes"<<endl;
                r = l;
                l = 0;
            }
            else{
                cout<<"no"<<endl;
                return;
            }
        }
    }
    if(changes==3){
        if(t==-1){
            cout<<"no"<<endl;
            return;
        }
        if(t==1){
            if(nums[l]<nums[r+1] and nums[r]>nums[l-1]){
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
                return;
            }
        }
    }

    cout<<l+1<<" "<<r+1<<endl;
    return;
}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
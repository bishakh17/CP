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
    int sum = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        sum += abs(nums[i]);
    }
    if(sum%2){cout(-1); return;}
    int k = 0;
    int i = 0;
    int prev = -1;
    while(i<n){
        prev = i;
        while(i<n and !nums[i])i++;
        if(!nums[prev]){k++; continue;}
        int count = 0;
        i++;
        while(!nums[i]){count++; i++;}
        if(nums[i]==nums[prev]){
            if(count%2==0) k++;
            else k+=2;
        }
        else{
            if(count%2==0) k+=2;
            else k++;
        }
        i++;
    }
    cout(k);
    i = 0;
    prev = -1;
    while(i<n){
        prev = i;
        while(i<n and !nums[i])i++;
        if(!nums[prev]){cout<<prev+1<<" "<<i<<endl; continue;}
        int count = 0;
        i++;
        while(!nums[i]){count++; i++;}
        if(nums[i]==nums[prev]){
            if(count%2==0) cout<<prev+1<<" "<<i+1<<endl;
            else{
                cout<<prev+1<<" "<<prev+1<<endl;
                cout<<prev+2<<" "<<i+1<<endl;
            }
        }
        else{
            if(count%2==0){
                cout<<prev+1<<" "<<i<<endl;
                cout<<i+1<<" "<<i+1<<endl; 
            }
            else cout<<prev+1<<" "<<i+1<<endl;
        }
        i++;
    }
}
 
int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
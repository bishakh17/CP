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
    int k = n/2;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(i%2 and nums[i]!=nums[i-1])k++;
    }
    if(n%2){cout(-1); return;}
    cout(k);
    for(int i = 0; i<n; i = i+2){
        if(nums[i]==nums[i+1]){cout<<i+1<<" "<<i+2<<endl;}
        else{cout<<i+1<<" "<<i+1<<endl<<i+2<<" "<<i+2<<endl;}
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
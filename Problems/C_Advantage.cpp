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
    int maxi1 = -1;
    int maxi2 = -1;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]>=maxi1){maxi2 = maxi1; maxi1 = nums[i];}
        else if(nums[i]>maxi2){maxi2 = nums[i];}
    }
    for(int i = 0; i<n; i++){
        if(nums[i]!=maxi1) cout<<nums[i]-maxi1<<" ";
        else cout<<nums[i]-maxi2<<" ";
    }
    cout<<endl;
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
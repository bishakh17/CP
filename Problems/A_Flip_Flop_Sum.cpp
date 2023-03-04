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
        sum+=nums[i];
    }
    int maxi = 0;
    int count = 0;
    for(int i = 0; i<n; i++){
        if(nums[i] == -1) count++;
        if(nums[i] == 1){maxi = max(maxi, count); count = 0;}
    }
    maxi = max(maxi,count);
    if(maxi == 0) sum -= 4;
    if(maxi > 1) sum += 4;
    cout(sum);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
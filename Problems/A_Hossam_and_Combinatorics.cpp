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
    int maxi = 0;
    int mini = INT64_MAX;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        maxi = max(maxi,nums[i]);
        mini = min(mini,nums[i]);
    }
    if(mini==maxi){
        cout(n*(n-1));
        return;
    }
    int a = 0, b = 0;
    for(int i = 0; i<n; i++){
        if(nums[i] == mini) a++;
        if(nums[i] == maxi) b++;
    }
    cout(2*a*b);
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
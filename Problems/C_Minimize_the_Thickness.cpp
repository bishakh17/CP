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
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int ans = n;
    int sum = 0;
    for(int size = 1; size<=n; size++){
        sum+=nums[size-1];
        int temp_thick = size;
        int temp_sum = 0;
        int curr_thick = 0;
        for(int i = size; i<n; i++){
            temp_sum+=nums[i];
            curr_thick++;
            if(temp_sum==sum){temp_thick = max(temp_thick,curr_thick);curr_thick=0;temp_sum=0;}
            if(temp_sum>sum){temp_thick = INT64_MAX; break;}
        }
        if(!temp_sum)ans = min(ans,temp_thick);
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    int ans = 0;
    if(n==1){int x; cin>>x; cout(ans); return;}
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    int k = nums[0]*2-1;
    for(int i = 1; i<n; i++){
        if(nums[i]>k){
            int temp = ceil((double)nums[i]/(double)k);
            ans+=temp-1;
        }
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
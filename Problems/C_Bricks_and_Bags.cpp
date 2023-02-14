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
    sort(nums.begin(),nums.end());
    int min2 = upper_bound(nums.begin(),nums.end(),nums[0])-nums.begin();
    int max2 = lower_bound(nums.begin(),nums.end(),nums[n-1])-nums.begin();
    min2--;
    if(min2<n-1) min2++;
    if(max2>0) max2--;
    cout(nums[n-1]-nums[0]+max(nums[n-1]-nums[max2],nums[min2]-nums[0]));

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
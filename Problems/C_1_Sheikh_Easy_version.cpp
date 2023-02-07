#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,q; cin>>n>>q;
    vector<int> nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }
    int l,r;
    cin>>l>>r;
    l--; r--;
    int sum = 0; 
    int xr = 0;
    for(int i = l; i<=r; i++){
        sum+=nums[i];
        xr = xr^nums[i];
    }
    int target = sum - xr;
    if(!target){cout<<l+1<<" "<<l+1<<endl; return;}
    int i = l;
    int j = l;
    int ans = r-l+1;
    sum = 0;
    xr = 0;
    int a = l;
    int b = r;
    while(j<=r+1){
        if(sum-xr==target){
            if(ans>j-i){
                a = i;
                b = j-1;
                ans = j-i;
            }
            if(i==j) break;
            sum-=nums[i];
            xr = xr^nums[i];
            i++;
        }
        else if(j<=r){
            sum+=nums[j];
            xr = xr^nums[j];
            j++;
        }
        else break;
    }

    cout<<a+1<<" "<<b+1<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
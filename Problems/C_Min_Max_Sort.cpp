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
    int t = 0;
    for(int i = 0; i<n; i++){
        cin>>nums[i];
        if(nums[i]==n/2+1) t = i;
    }
    if(n%2){
        int r = 0;
        int l = 0;
        int curr = n/2+2;
        for(int i = t; i<n; i++){
            if(nums[i]==curr){r++; curr++;}
        }
        curr = n/2;
        for(int i = t; i>=0; i--){
            if(nums[i]==curr){l++; curr--;}
        }
        int ans = n/2-min(l,r);
        cout(ans);
        return;
    }
    else{
        int mid2 = t;
        int mid1 = -1;
        for(int i = 0; i<=t; i++){
            if(nums[i]==n/2){mid1 = i; break;}
        }
        if(mid1==-1){cout(n/2); return;}
        int r = 1;
        int l = 1;
        int curr = nums[mid2]+1;
        for(int i = mid2; i<n; i++){
            if(nums[i]==curr){r++; curr++;}
        }
        curr = nums[mid1]-1;
        for(int i = mid1; i>=0; i--){
            if(nums[i]==curr){l++; curr--;}
        }
        int ans = n/2-min(l,r);
        cout(ans);
        return;

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
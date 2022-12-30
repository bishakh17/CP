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
    int gcd = nums[0];
    for(int i = 1; i<n; i++){
        gcd = __gcd(gcd,nums[i]);
    }
    if(gcd==1){cout(0); return;}
    int ans = -1;
    for(int i = n-1; i>=n-2; i--){
        int temp = __gcd(i+1,nums[i]);
        if(__gcd(temp,gcd)==1){ans = n-i; break;}
    }
    if(ans==-1) ans = 3;
    cout(ans);
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
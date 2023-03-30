#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
 
int helper(int n){
    int maxi = -1;
    int mini = 10;
    while(n){
        maxi = max(maxi, n%10);
        mini = min(mini, n%10); 
        n/=10;
    }
    return maxi-mini;
}
 
void solve(){
    int l,r; cin>>l>>r;
    int maxi = -1;
    int ans = l;
    for(int i = l; i<=r; i++){
        int temp = helper(i);
        if(temp>maxi){
            maxi = temp;
            ans = i;
        }
        if(maxi==9) break;
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
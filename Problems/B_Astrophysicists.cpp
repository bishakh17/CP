#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k,g; cin>>n>>k>>g;
    int r = g/2;
    if(g%2==0) r--;
    int tot = k*g;
    if(r*(n-1)>=tot){
        cout(tot);
        return;
    }
    int ans = r*(n-1);
    int temp = (tot-ans)%g;
    if(temp>r){
        ans-=(g-temp);
    }
    else{
        ans+=temp;
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
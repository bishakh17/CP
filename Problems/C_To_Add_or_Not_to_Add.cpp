#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n); for(int i = 0; i < n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int sum = 0, l = 0;
    int curr = 0, ans = -1; 
    for(int r = 0; r < n; r++){
        sum+=a[r];
        while((r-l+1)*a[r]-sum>k){
            sum -= a[l];
            l++;
        }
        if(r-l+1>curr) {
            curr = r-l+1;
            ans = a[r];
        }
    }
    cout<<curr<<" "<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
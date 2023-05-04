#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = 0;
    vector<int> prev(n);
    vector<int> curr(n);
    prev[0] = a[0];
    ans = max(ans, prev[0]);
    for(int i = 1; i<n; i++){
        prev[i] = max(prev[i-1], (int)0) + a[i];
        ans = max(ans, prev[i]);
    }
    cout<<ans<<" ";
    for(int k = 1; k<=n; k++){
        ans = 0;
        curr[0] = a[0]+x;
        ans = max(ans, curr[0]);
        for(int i = 1; i<n; i++){
            curr[i] = max(prev[i-1],(int)0) + a[i] + x;
            ans = max(ans, curr[i]);
        }
        cout<<ans<<" ";
        prev = curr;
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
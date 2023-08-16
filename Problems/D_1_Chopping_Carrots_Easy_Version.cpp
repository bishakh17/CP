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
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    int ans = 1e9;
    for(int m = 3000; m>=1; m--){
        int maxi = -1;
        int mini = 1e9;
        for(int i = 0; i<n; i++){
            int low = 1;
            int high = k;
            int p = -1;
            while(low<=high){
                int mid = (low+high)/2;
                if(a[i]/mid<=m){
                    p = mid;
                    high = mid-1;
                }
                else low = mid+1;
            }
            if(p==-1){
                cout(ans);
                return;
            }
            maxi = max(maxi, a[i]/p);
            mini = min(mini, a[i]/p);
        }
        ans = min(ans, maxi-mini);
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
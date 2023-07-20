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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = 0;
    for(int i = 0; i<n-1; i+=2){
        ans+=min(a[i],a[i+1]);
        if(a[i]<a[i+1]) continue;
        int high = a[i]-a[i+1];
        int low = 0;
        for(int j = i+2; j<n; j++){
            if(j%2==0){
                low+=a[j];
                high+=a[j];
                continue;
            }
            if(a[j]>high){
                ans+=(high-low+1);
                break;
            }
            if(a[j]<low){
                low-=a[j];
                high-=a[j];
                continue;
            }
            if(a[j]>=low && a[j]<=high){
                ans+=(a[j]-low+1);
                high-= a[j];
                low = 0;
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
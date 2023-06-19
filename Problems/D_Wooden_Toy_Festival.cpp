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
    sort(a.begin(),a.end());
    int low = 0; int high = a[n-1]-a[0];
    int ans = 1;
    while(low<=high){
        int mid = low+(high-low)/2;
        int prev = a[0]+mid;
        int cnt = 1;
        for(int i = 1; i<n; i++){
            if(a[i]<=prev+mid) continue;
            cnt++;
            prev = a[i]+mid;
            if(cnt>3) break;
        }
        if(cnt>3){
            low = mid+1;
        }
        else{
            ans = mid;
            high = mid-1;
        }
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
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
    vector<int> b(n);
    int ans = 0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        ans += a[i]*b[i];
    }
    int temp = ans;
    int gg = ans;
    for(int i = 1; i<n-1; i++){
        int r = i+1;
        int l = i-1;
        temp = gg;
        while(l>=0 and r<n){
            temp -= (a[r]*b[r] + a[l]*b[l]);
            temp += (a[r]*b[l] + a[l]*b[r]);
            ans = max(ans, temp);
            l--; r++;
        }
    }
    for(int i = 0; i<n-1; i++){
        int l = i;
        int r = i+1;
        temp = gg;
        while(l>=0 and r<n){
            temp -= (a[l]*b[l] + a[r]*b[r]);
            temp += (a[l]*b[r] + a[r]*b[l]);
            ans = max(ans, temp);
            l--; r++;
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
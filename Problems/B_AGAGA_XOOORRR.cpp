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
    int xr = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        xr ^= a[i];
    }
    if(xr == 0){
        cout("YES");
        return;
    }
    int xr2 = 0;
    int t = 0;
    for(int i=0; i<n-1; i++){
        xr2 ^= a[i];
        if(!t and xr2 == xr) t = 1;
        if(t and xr2 == 0){
            cout("YES");
            return;
        }
    }
    cout("NO");
     

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
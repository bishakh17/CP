#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,c,k;
    cin>>n>>c>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(), a.end());
    int ans = 0; 
    int curr = -1;
    int x = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > curr) {
            ans++;
            x = 1;
            curr = a[i] + k;
        }
        else if (x==c) {
            ans++;
            x = 1;
            curr = a[i] + k;
        }
        else {
            x++;
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
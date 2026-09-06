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
    vector<int> a(n); vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i]>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    int curr = 0;
    int i = 0; int j = 0;
    while(i<n) {
        if(a[i]<=b[j]) {
            curr++;
            ans = max(ans, curr);
            i++;
        } else {
            curr--;
            j++;
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
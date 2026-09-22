#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<int> a(n); for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> b(m); for(int i = 0; i<m; i++) cin>>b[i];
    vector<int> temp(n+1, -1);
    int ans = 0;
    int j = 0;
    for(int i = 0; i<m; i++){
        if(temp[b[i]] == 1) {ans++; continue;}
        while(a[j]!=b[i]) {
            temp[a[j]] = 1;
            j++;
        }
        ans += (j-i)*2 + 1;
        j++;
    }
    cout<<ans<<endl;
}

int32_t main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     // freopen("output.txt", "w", stdout); // Uncomment if you want to write output to output.txt
    // #endif
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
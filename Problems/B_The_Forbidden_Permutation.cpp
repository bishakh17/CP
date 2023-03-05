#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n, m, d; cin>>n>>m>>d;
    vector<int> p(n+1);
    for(int i = 1; i<n+1; i++){
        int x; cin>>x;
        p[x] = i;
    };
    vector<int> a(m);
    for(int i = 0; i<m; i++) cin>>a[i];
    int ans = INT64_MAX;
    for(int i = 0; i<m-1; i++){
        int x = p[a[i]];
        int y = p[a[i+1]];
        if(x<y and y<=x+d){
            int temp = y-x;
            if(d<n-1) temp = min(temp, x+d-y+1);
            ans = min(ans, temp);
        }
        else ans = 0;
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
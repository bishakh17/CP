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
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    vector<int> b(n);
    int ans = 0;
    for(int j = 0; j<m; j++){
        for(int i = 0; i<n; i++){
            b[i] = a[i][j];
        }
        sort(b.begin(), b.end());
        int prev = 0;
        for(int i = 1; i<n; i++){
            int temp = b[i]-b[i-1];
            temp = temp*i + prev;
            ans+=temp;
            prev = temp;
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
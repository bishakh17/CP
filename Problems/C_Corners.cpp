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
    vector<string> a(n);
    int ones = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j = 0; j<m; j++){
            if(a[i][j]=='1') ones++;
        }
    }
    int mini = 4;
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<m-1; j++){
            int cnt = 0;
            if(a[i][j]=='1') cnt++;
            if(a[i+1][j]=='1') cnt++;
            if(a[i][j+1]=='1') cnt++;
            if(a[i+1][j+1]=='1') cnt++;
            mini = min(mini,cnt);
        }
    }
    if(mini<=2){
        cout(ones);
        return;
    }
    else cout(ones+2-mini);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
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
    int l = 1; int r = n*n;
    int t = 1;
    vector<vector<int>> a(n, vector<int>(n));
    int i = 0; int j = 0;
    while(i<n) {
        while(j<n and j>=0) {
            a[i][j] = (t%2) ? l++ : r--;
            t = 1 - t;
            if(i%2 == 0) j++;
            else j--;
        }
        i++;
        j = (i%2 == 0) ? 0 : n-1;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
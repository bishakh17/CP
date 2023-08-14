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
    int mini = INT_MAX;
    vector<int> ans(n);
    for(int i = 0; i<n; i++){
        int m; cin>>m;
        vector<int> a(m);
        for(int j = 0; j<m; j++){
            cin>>a[j];
        }
        sort(a.begin(), a.end());
        mini = min(mini, a[0]);
        ans[i] = a[1];
    }
    sort(ans.begin(), ans.end());
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += ans[i];
    }
    sum -= ans[0];
    sum += mini;
    cout(sum);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
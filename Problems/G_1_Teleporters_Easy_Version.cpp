#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,c; cin>>n>>c;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        a[i] = a[i]+i+1;
    }
    sort(a.begin(), a.end());
    int i = 0;
    int ans = 0;
    while(c>=a[i] and i<n){
        c = c-a[i];
        ans++;
        i++;
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
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
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    if(a[0]==a[n-1]){
        cout(-1);
        return;
    }
    int cnt = 0;
    for(int i=n-1; i>=0; i--){
        if(a[i]==a[n-1]) cnt++;
    }
    cout<<n-cnt<<" "<<cnt<<endl;
    for(int i = 0; i<n-cnt; i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i = 0; i<cnt; i++) cout<<a[n-1]<<" ";
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
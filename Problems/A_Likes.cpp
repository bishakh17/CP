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
    sort(a.begin(),a.end(),greater<int>());
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i]>0) count++;
        else count--;
        cout<<count<<" ";
    }
    cout<<endl;
    int i = n-1;
    int k = 0;
    while(i>=0 and a[i]<0){
        cout<<1<<" "<<0<<" ";
        i--;
        k = k+2;
    }
    for(int j = 1; j<=(n-k); j++){
        cout<<j<<" ";
    }
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
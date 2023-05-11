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
    for(int i = 1; i<n-1; i++){
        int temp = a[i-1]-a[i];
        if(temp>0){a[i] = a[i-1]; a[i+1]+=temp;}
    }
    for(int i = n-2; i>0; i--){
        int temp = a[i]-a[i+1];
        if(temp>0){a[i] = a[i+1]; a[i-1]-=temp;}
    }
    for(int i = 1; i<n; i++){
        if(a[i]<a[i-1]){cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
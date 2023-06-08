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
    for(int i=0;i<n;i++) cin>>a[i];
    int q; cin>>q;
    vector<int> b(q,0);
    vector<int> one(n,-1);
    for(int i = 0; i<q; i++){
        int gg; cin>>gg;
        if(gg==1){
            int p,x; cin>>p>>x;
            a[p-1] = x;
            one[p-1] = i;
        }
        else{
            int x; cin>>x;
            b[i] = x;
        }
    }
    for(int i = q-2; i>=0; i--){
        b[i] = max(b[i],b[i+1]);
    }
    for(int i = 0; i<n; i++){
        if(one[i]==-1) a[i] = max(a[i],b[0]);
        else a[i] = max(a[i],b[one[i]]);
    }
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
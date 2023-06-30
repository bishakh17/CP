#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,x; cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b = a;
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(i<x and n-i-1<x){
                cout("NO");
                return;
            }
        }
    }
    cout("YES");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
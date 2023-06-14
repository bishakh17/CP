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
    vector<int> b = a;
    sort(b.begin(), b.end());
    int t1 = 1; int t2 = 1; int cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            t1 = 0;
            if(t2==1) cnt++;
            t2 = 0;
        }
        else{
            t2 = 1;
        }
    }
    if(t1) cout<<0<<endl;
    else if(cnt==1) cout<<1<<endl;
    else cout<<2<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
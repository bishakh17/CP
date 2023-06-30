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
    int t = 0;
    for(int i=0;i<n;i++){cin>>a[i]; if(a[i]==1) t++;}
    if(t!=1){cout("NO"); return;}
    for(int i = 0; i<n; i++){
        if(a[(i+1)%n]>a[i]+1){t=0; break;}
    }
    if(!t){cout("NO"); return;}
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
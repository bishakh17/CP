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
    if(a[n-1]==0) {cout(0); return;}
    int lie = -1;
    for(int i = 0; i<n; i++){
        if(n-i>a[i]) continue;
        if(a[i]==n-i){cout(-1); return;}
        lie = n-i;
        break;
    }
    cout(lie);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
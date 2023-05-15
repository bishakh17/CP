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
    int ans = abs(a[0] - 1);
    if(ans==1) {cout<<1<<endl; return;}
    for(int i = 1; i<n; i++){
        int temp = abs(a[i] - i - 1);
        if(!temp) continue;
        if(temp==1) {cout<<1<<endl; return;}
        ans = __gcd(ans, temp);
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
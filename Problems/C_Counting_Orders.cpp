#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
int M = 1e9 + 7;

int modMul(int a, int b){
    return ((a%M)*(b%M))%M;
}


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 1;
    int j = n-1;
    for(int i = n-1; i>=0; i--){
        if(b[i]>=a[j]) ans = 0;
        while(j>0 && b[i]<a[j-1]) j--;
        ans = modMul(ans, i-j + 1);
        if(ans == 0) break;
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
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
    if(n==1) {cout(0); return;}
    int i = 1; int j = n-2;
    int ans = abs(a[0]-a[n-1]);
    while(i<j){
        int temp = abs(a[i]-a[j]);
        ans = __gcd(ans,temp);
        i++; j--;
    }
    if(ans==INT64_MAX) cout(0);
    else cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
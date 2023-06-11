#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,a,b; cin>>n>>a>>b;
    string s; cin>>s;
    int ans = n*a + (n+1)*b;
    int i = 0;
    while(i<n and s[i]=='0') i++;
    if(i==n){
        cout<<ans<<endl;
        return;
    }
    while(i<n){
        int cnt1  = 0;
        while(i<n and s[i]=='1') i++,cnt1++;
        ans += (cnt1+1)*b;
        int cnt0 = 0;
        while(i<n and s[i]=='0') i++,cnt0++;
        if(i==n) break;
        int temp = min((cnt0-1)*b,2*a);
        ans += temp;
    }
    ans+=2*a;
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
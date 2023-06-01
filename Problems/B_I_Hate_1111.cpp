#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int dp(int i, int n, vector<int>& a){
    if(n==0) return 1;
    if(i==7) return 0;
    int temp = 0;
    if(a[i]<=n) temp = dp(i, n-a[i], a) or dp(i+1, n, a);
    return temp;
}

void solve(){
    int n; cin>>n;
    if(n>=1100) {
        cout<<"YES"<<endl;
        return;
    }
    vector<int> a(7);
    a[0] = 11;
    for(int i = 1; i<7; i++){
        a[i] = a[i-1]*10 + 1;
    }
    int temp = dp(0,n,a);
    if(temp) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
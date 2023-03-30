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
    for(int i = 0; i<n; i++) cin>>a[i];
    int m = 0;
    if(a[0]!=a[n-1]) m++;
    int temp = a[0]+a[n-1];
    if(temp%2) temp = a[0];
    else temp = a[n-1];
    for(int i = 1; i<n-1; i++){
        if(temp!=a[i]) m++;
    }
    cout(m);
    if(a[0]!=a[n-1]) cout<<1<<" "<<n<<endl;
    for(int i = 1; i<n-1; i++){
        if(a[i]!=temp){
            if((temp+a[i])%2) cout<<1<<" "<<i+1<<endl;
            else cout<<i+1<<" "<<n<<endl;
        }
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
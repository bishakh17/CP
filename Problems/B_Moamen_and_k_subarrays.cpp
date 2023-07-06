#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b = a;
    sort(b.begin(),b.end());
    int cnt = 1;
    for(int i = 1; i<n; i++){
        int pos = lower_bound(b.begin(),b.end(),a[i])-b.begin();
        if(pos==0) cnt++;
        else if(a[i-1]!=b[pos-1]) cnt++;
    }
    if(cnt<=k) cout("Yes");
    else cout("No");

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
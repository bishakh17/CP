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
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt = 0;
    int i = 0;
    while(i<n and a[i]==1)i++;
    if(i==n){
        cout(0);
        return;
    }
    cnt+=i;
    int j = n-1;
    while(j>=0 and a[j]==1)j--;
    cnt+=(n-j-1);
    int ans = n-cnt+1;
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
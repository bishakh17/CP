#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
   int n,q; cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> pre_max(n,a[0]);
    for(int i=1;i<n;i++) pre_max[i] = max(pre_max[i-1],a[i]);
    vector<int> next_greater(n,-1);
    for(int i=n-2;i>=0;i--){
        int t = i+1;
        while(t!=-1 and t<n and a[t]<=a[i]) t = next_greater[t];
        next_greater[i] = t;
    } 
    while(q--){
        int i,k; cin>>i>>k;
        i--;
        if(k<i) cout(0);
        else if(pre_max[i]!=a[i]) cout(0);
        else if(next_greater[i]==-1){if(i==0)cout(k); else cout(k-i+1);}
        else if(k>=next_greater[i]){if(i==0) cout(next_greater[i]-i-1); else cout(next_greater[i]-i);}
        else {if(i==0) cout(k-i); else cout(k-i+1);}
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
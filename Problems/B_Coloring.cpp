#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<int> a(m);
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    int seg = n/k;
    if(n%k) seg++;
    int extra = n%k;
    int count = 0;
    for(int i = 0; i<m; i++){
        if(a[i]>seg){cout("NO"); return;}
        if(a[i]==seg and extra!=0) count++;
    }
    if(count>extra){cout("NO"); return;}
    cout("YES");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
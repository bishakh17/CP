#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m,d; 
    cin>>n>>m>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = n-1, j = m-1;
    while(i >= 0 && j >= 0){
        if(abs(a[i]-b[j]) <= d) {cout(a[i]+b[j]); return;}
        if((a[i] > b[j])) i--;
        else j--;
    }
    cout(-1);
    
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
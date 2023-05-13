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
    sort(a.begin(),a.end());
    if(a[n-1]!=a[n-2]){
        if(a[0]==a[n-2]) cout("NO");
        else cout("YES");
    }
    else{
        int i = n-2;
        while(i>=0){
            if(a[i+1]==a[i]) i--;
            else break;
        }
        if(i==-1) cout("NO");
        else if(i+1>=n-i-2) cout("YES");
        else cout("NO");
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
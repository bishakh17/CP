#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    vector<int> a(51,-1);
    int n,q; cin>>n>>q;
    for(int i=0;i<n;i++){
        int temp; cin>>temp;
        if(a[temp]==-1) a[temp] = i;
    }
    for(int i=0;i<q;i++){
        int temp; cin>>temp;
        cout<<a[temp]+1<<" ";
        for(int j=1;j<51;j++){
            if(a[j]<a[temp] && a[j]!=-1) a[j]++;
        }
        a[temp] = 0;
    }
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
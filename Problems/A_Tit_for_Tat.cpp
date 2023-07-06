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
    for(int i = 0; i<n-1; i++){
        if(a[i]<k){
            k-=a[i];
            a[n-1]+=a[i];
            a[i]=0;
        }
        else{
            a[i]-=k;
            a[n-1]+=k;
            k=0;
        }
    }
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
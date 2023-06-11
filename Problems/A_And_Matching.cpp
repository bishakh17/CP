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
    if(n==4 and k==3){cout(-1); return;}
    if(k==0){
        for(int i=0;i<n/2;i++){
            cout<<i<<" "<<n-i-1<<endl;
        }
    }
    else if(k!=n-1){
        for(int i=0;i<n/2;i++){
            if(i!=k and i!=0 and (n-i-1)!=k)cout<<i<<" "<<n-i-1<<endl;
        }
        cout<<n-1<<" "<<k<<endl;
        cout<<0<<" "<<n-k-1<<endl;
    }
    else{
        k--;
        for(int i=0;i<n/2-2;i++){
            if(i!=k and i!=0 and (n-i-1)!=k)cout<<i<<" "<<n-i-1<<endl;
        }
        cout<<n-1<<" "<<k<<endl;
        cout<<0<<" "<<n-k-1<<endl;
        cout<<n/2-2<<" "<<n/2<<endl;
        cout<<n/2-1<<" "<<n/2+1<<endl;
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
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    int n;
    cin>>n;
    ll ans = 0;
    int maxi = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        ans+=x;
    }
    for(int i = 0; i<n; i++){
        int x; 
        cin>>x;
        maxi = max(maxi,x);
        ans+=x;
    }
    ans-=maxi;
    cout<<ans<<endl;
    return;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
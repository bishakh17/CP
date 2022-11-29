#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve(){
    int n;
    cin>>n;
    vector<int> a(1001,0);
    vector<int> b(1001,0);
    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        a[x]++;
        if(x==y){
            b[y]++;
        }
        else b[y] = b[y]+2;
    }
    int ans = 0;
    for(int i = 0; i<1001; i++){
        if(a[i]==0) continue;
        if(b[i]==1) ans++;
        if(b[i]==0) ans+=a[i];
    }
    cout<<ans<<endl;
    return;
}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
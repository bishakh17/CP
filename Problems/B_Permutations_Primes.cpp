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
    for(int i=0; i<n; i++) a[i] = i+1;
    if(n<=2){
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    if(n==3){
        cout<<2<<" "<<1<<" "<<3<<endl;
        return;
    }
    if(n==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
        return;
    }
    if(n==5){
        cout<<2<<" "<<4<<" "<<1<<" "<<5<<" "<<3<<endl;
        return;
    }
    swap(a[0],a[n/2]);
    swap(a[1],a[0]);
    swap(a[2],a[n-1]);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
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
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long


void solve(){
    ll a,b,n;
    ll M = 1e9+7;
    cin>>a>>b>>n;
    ll c = b-a;
    int k = n%3;
    if(k==0 or k==1) n = n+1;
    if(n%2){
        a = -a;
        b = -b;
        c = -c;
    }
    int t = 0;
    if(k==0){
        if(c%M<0) t = 1;
        cout<<c%M + t*M<<endl;
    }
    if(k==1){
        if(a%M<0) t = 1;
        cout<<a%M + t*M<<endl;
    }
    if(k==2){
        if(b%M<0) t = 1;
        cout<<b%M + t*M<<endl;
    }
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
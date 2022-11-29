#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    ll k = a;
    for(ll i = 0; i<10; i++){
        if((a*10+i)%b==0){
            a=a*10+i;
            break;
        }
    }
    if(a==k){
        cout<<-1<<endl;
        return;
    }
    cout<<a;
    for(int i = 0; i<n-1; i++){
        cout<<0;
    }
    cout<<endl;
    return;
}

int main(){
    ll T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int d = max(a,max(b,c));
    if(2*d == a+b+c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
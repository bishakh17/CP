#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long int D,d,P,Q;
    cin>>D>>d>>P>>Q;
    long long int rate = D/d;
    long long int extra = D%d;
    long long int ans = P*D + Q*d*rate*(rate-1)/2 + rate*Q*extra;
    cout<<ans<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long ans = 0;
    long long n;
    cin>>n;
    for(long long i = 0; i<n; i++){
        long long x;
        cin>>x;
        ans = ans|x;
    }
    cout<<ans<<endl;
    return;
}

int main(){
    long long T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
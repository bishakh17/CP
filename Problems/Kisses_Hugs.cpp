#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int M = 1e9+7;
    int n;
    cin>>n;
    long long ans = 1;
    for(int i = 1; i<n+1; i++){
        int temp = ceil((double)(n-i)/2);
        ans+=pow(2,temp);
    }
    ans = ans%M;
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
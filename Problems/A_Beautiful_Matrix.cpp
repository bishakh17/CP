#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int ans;
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<=5; j++){
            int x;
            cin>>x;
            if(x) ans = abs(i-3) + abs(j-3);
        }
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
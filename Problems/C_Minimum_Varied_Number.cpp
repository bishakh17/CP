#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int s;
    cin>>s;
    int ans = 0;
    int t = 0;
    for(int i = 9; i>-1; i--){
        if(s>=i){
            ans = ans + i*pow(10,t);
            t++;
            s = s-i;
        }
    }
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
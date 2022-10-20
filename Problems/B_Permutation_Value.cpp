#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    cout<<1<<" ";
    for(int i = 0; i<n-2; i++){
        cout<<i+3<<" ";
    }
    cout<<2<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
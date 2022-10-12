#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> ans;

void dp(int n){
    ans.push_back(n);
    if(n==1) return;
    int i = 2;
    while(i<=n){
        if(n%i!=0) i++;
        else{
            dp(n/i);
            break;
        }
    }
}
void solve(){
    int n;
    cin>>n;
    dp(n);
    for(int i : ans){
        cout<<i<<" ";
    }
}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
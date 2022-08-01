#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    unordered_map<int,int> map;
    for(int i = n-1; i>-1; i--){
        if(map.find(a[i])!=map.end()){
            cout<<i+1<<endl;
            return;
        }
        map[a[i]]=1;
    }
    cout<<0<<endl;
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
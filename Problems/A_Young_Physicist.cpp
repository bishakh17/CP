#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int arr[] = {0,0,0};
    for(int i = 0; i<n; i++){
        int x,y,z;
        cin>>x>>y>>z;
        arr[0]+=x;
        arr[1]+=y;
        arr[2]+=z;
    }
    if(arr[0]==0 and arr[1]==0 and arr[2]==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int count = n;
    vector<int> ans(n,-1);
    for(int i = n-1; i>-1; i--){
        if(ans[i]!=-1) continue;
        int upper = sqrt(2*i);
        // int lower = ceil(sqrt(i));
        ans[i] = upper*upper-i;
        ans[upper*upper-i] = i;
    }
    for(int i = 0; i<n ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    string lids;
    vector<int> mags(n);
    cin>>lids;
    for(int i = 0; i<n; i++){
        cin>>mags[i];
    }
    int ans = 0;
    int i = 0;

    while(lids[i] == '1' and i<n){
        ans+=mags[i];
        i++;
    }
    for( ; i<n; i++){
        int sum = mags[i-1];
        int mini = mags[i-1];
        while(i<n and lids[i] == '1'){
            sum+=mags[i];
            mini = min(mini,mags[i]);
            i++;
        }
        sum-=mini;
        ans+=sum;
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
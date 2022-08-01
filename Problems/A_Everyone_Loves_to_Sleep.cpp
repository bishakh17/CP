#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,H,M;
    cin>>n>>H>>M;
    vector<pair<int,int>> alarms(n);
    for(int i = 0; i<n; i++){
        cin>>alarms[i].first>>alarms[i].second;
    }
    int ans = INT_MAX;
    for(int i = 0; i<n; i++){
        int diff = (alarms[i].first-H)*60 + (alarms[i].second-M);
        if(diff<0) diff = 24*60 + diff; 
        ans = min(ans, diff);
    }
    int h = ans/60;
    int m = ans%60;
    cout<<h<<" "<<m<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
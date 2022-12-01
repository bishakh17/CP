#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define cout(x) cout<<(x)<<endl
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> time(n);
    for(int i = 0; i<n; i++){
        cin>>time[i].first>>time[i].second;
    }
    sort(time.begin(), time.end());
    int ans = 1;
    int count = 1;
    for(int i = 1; i<n; i++){
        if(time[i].first==time[i-1].first and time[i].second==time[i-1].second) count++;
        else{
            ans = max(ans,count);
            count = 1;
        }
    }
    ans = max(ans,count);
    cout(ans);
    return;
}

int main(){
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
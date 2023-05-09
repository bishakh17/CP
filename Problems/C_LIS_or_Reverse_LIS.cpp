#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n; cin>>n;
    int count = 0;
    map<int,int> mp;
    int maxi = -1;
    int mini = INT64_MAX;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        mp[x]++;
        maxi = max(maxi,x);
        mini = min(mini,x);
    }
    int t = 0;
    for (auto it : mp) {
        count+=min(it.second,(int)2);
        if(it.second==1) t = 1;
    }
    if(t==1) count++;
    cout(count/2);

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
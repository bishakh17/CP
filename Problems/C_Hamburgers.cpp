#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

int check(vector<pair<pair<int,int>,int>> &temp, int mid, int r){
    int cost = 0;
    for(int i = 0; i<3; i++){
        int need = temp[i].second*mid;
        cost += max(0LL, (need-temp[i].first.first)*temp[i].first.second);
    }
    return cost<=r;
}

void solve(){
    string s; cin>>s;
    vector<pair<pair<int,int>,int>> temp(3);
    for(int i = 0; i<3; i++) cin>>temp[i].first.first;
    for(int i = 0; i<3; i++) cin>>temp[i].first.second;
    int r; cin>>r;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='B') temp[0].second++;
        else if(s[i]=='S') temp[1].second++;
        else temp[2].second++;
    }
    int l = 0, h = 1e13, ans = -1;
    while(l<=h) {
        int mid = l + (h-l)/2;
        int cost = 0;
        if(check(temp,mid,r)){
            ans = mid;
            l = mid+1;
        } else h = mid-1;
    }
    cout(ans);

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
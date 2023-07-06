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
    vector<pair<int,int>> temp(n);
    for(int i = 0; i<n; i++){
        int k; cin>>k;
        temp[i].second = k;
        int maxi = 0;
        for(int j = 0; j<k; j++){
            int x; cin>>x;
            maxi = max(maxi,x-j);
        }
        temp[i].first = maxi+1;
    }
    sort(temp.begin(),temp.end());
    int ans = temp[0].first;
    int p = ans+temp[0].second;
    for(int i = 1; i<n; i++){
        if(temp[i].first>p){
            ans+=temp[i].first-p;
        }
        p = max(p,temp[i].first);
        p+=temp[i].second;
    }
    cout(ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
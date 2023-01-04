#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int n = s.size();
    int a = (int)s[0];
    int b = (int)s[n-1];
    int low = min(a,b);
    int high = max(a,b);
    int cost = high-low;
    int tiles = 2;
    vector<pair<int,int>> ans;
    for(int i = 1; i<n-1; i++){
        if((int)s[i]>=low and (int)s[i]<=high){
         tiles++;
            ans.push_back({(int)s[i],i+1});
        }
    }
    cout<<cost<<" "<<tiles<<endl;
    if(a<b) sort(ans.begin(),ans.end());
    else sort(ans.begin(),ans.end(),greater<pair<int,int>>());
    cout<<1<<" ";
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i].second<<" ";
    }
    cout<<n<<endl;
    return;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
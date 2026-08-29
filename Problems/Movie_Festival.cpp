#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

bool cmp (pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> movies(n);
    for(int i=0;i<n;i++){
        cin>>movies[i].first>>movies[i].second;
    }
    sort(movies.begin(), movies.end(), cmp);
    int ans = 0; int x = 0;
    for(int i = 0; i<n; i++){
        if(movies[i].first>=x){
            ans++;
            x = movies[i].second;
        }
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
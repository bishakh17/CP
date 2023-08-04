#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    if(a.first!=b.first)return (a.first > b.first);
    return (a.second < b.second);
}

void solve(){
    int n,k; cin>>n>>k;
    vector<pair<int,int>> a(n);
    for(int i = 1; i<=n; i++){
        int x; cin>>x;
        x = x%k;
        if(x==0)x=k;
        a[i-1] = {x,i};
    }
    sort(a.begin(),a.end(),sortbysec);
    for(int i = 0; i<n; i++){
        cout<<a[i].second<<" ";
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
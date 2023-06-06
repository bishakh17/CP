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
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    int ans = 0;
    int i=0,j=n-1;
    int bought = 0;
    while(i<=j){
        if(bought>=v[i].first){
            ans+=v[i].second;
            bought+=v[i].second;
            i++;
        }
        else{
            int req = v[i].first-bought;
            int temp = min(req,v[j].second);
            ans+=2*temp;
            bought+=temp;
            v[j].second-=temp;
            if(v[j].second==0) j--;
        }
    }
    cout<<ans<<endl;

}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
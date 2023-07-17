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
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<n; i++){
        if(v[i].first==v[i].second){
            cout<<v[i].first<<" "<<v[i].second<<" "<<v[i].first<<endl;
            continue;
        }
        int maxi = -1; 
        for(int j = 0; j<n; j++){
            if(i==j) continue;
            if(v[i].first==v[j].first and v[i].second-1==v[j].second){
                cout<<v[i].first<<" "<<v[i].second<<" "<<v[i].second<<endl;
                maxi = -1;
                break;
            }
            if(v[i].first==v[j].first-1 and v[i].second==v[j].second){
                cout<<v[i].first<<" "<<v[i].second<<" "<<v[i].first<<endl;
                maxi = -1;
                break;
            }
            if(v[i].first==v[j].first and v[j].second<v[i].second) maxi = max(maxi,v[j].second);
        }
        if(maxi!=-1) cout<<v[i].first<<" "<<v[i].second<<" "<<maxi+1<<endl;
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
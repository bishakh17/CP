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
    string s; cin>>s;
    int cnt = 0;
    int t = 0;
    vector<pair<char,int>> b;
    b.push_back({s[0],1});
    for(int i = 1; i<n; i++){
        if(s[i]!=b[b.size()-1].first){
            b.push_back({s[i],1});
        }
        else{
            b[b.size()-1].second++;
        }
    }
    for(int i = 0; i<b.size(); i++){
        if(b[i].second>1){
            cnt++;
            if(cnt>1){
                t = 2;
                break;
            }
        }
        if(b[i].second>2){
            t = 2;
            break;
        }
        if(b[i].second>1){
            t = 1;
        }
    }
    cout(t+b.size());
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
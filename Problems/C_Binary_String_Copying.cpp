#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

struct hashFunction
{
  size_t operator()(const pair<int , 
                    int> &x) const
  {
    return x.first ^ x.second;
  }
};
void solve(){
    int n,m; cin>>n>>m;
    string s; cin>>s;
    vector<pair<int,int>> v(m);
    for(int i = 0; i<m; i++){
        int x,y; cin>>x>>y;
        v[i] = {x,y};
    }
    vector<int> prevOne(n,-1);
    for(int i = 1; i<n; i++){
        if(s[i-1]=='1') prevOne[i] = i-1;
        else prevOne[i] = prevOne[i-1];
    }
    vector<int> nextZero(n,n);
    for(int i = n-2; i>=0; i--){
        if(s[i+1]=='0') nextZero[i] = i+1;
        else nextZero[i] = nextZero[i+1];
    }
    vector<int> prevZero(n,-1);
    for(int i = 1; i<n; i++){
        if(s[i-1]=='0') prevZero[i] = i-1;
        else prevZero[i] = prevZero[i-1];
    }
    int ans = 0;
    int t = 0;
    unordered_set<pair<int, int>, 
  hashFunction> mp;
    for(int i = 0; i<m; i++){
        int l = v[i].first-1;
        int r = v[i].second-1;
        if(s[l]=='0' and s[r]=='0'){
            if(prevOne[r]==prevOne[l]){
                if(t==0){
                    ans++;
                    t = 1;
                }
                continue;
            }
            int left = prevOne[l]+1;
            int right = nextZero[r]-1;
            if(mp.find({left,right})==mp.end()){
                mp.insert({left,right});
                ans++;
            }
        }
        if(s[l]=='0' and s[r]=='1'){
            int temp = prevZero[r];
            if(prevOne[temp]==prevOne[l]){
                if(t==0){
                    ans++;
                    t = 1;
                }
                continue;
            }
            int left = prevOne[l]+1;
            int right = nextZero[r]-1;
            if(mp.find({left,right})==mp.end()){
                mp.insert({left,right});
                ans++;
            }
        }
        if(s[l]=='1' and s[r]=='0'){
            int left = prevOne[l]+1;
            int right = nextZero[r]-1;
            if(mp.find({left,right})==mp.end()){
                mp.insert({left,right});
                ans++;
            }
        }
        if(s[l]=='1' and s[r]=='1'){
            if(prevZero[r]==prevZero[l]){
                if(t==0){
                    ans++;
                    t = 1;
                }
                continue;
            }
            int left = prevOne[l]+1;
            int right = nextZero[r]-1;
            if(mp.find({left,right})==mp.end()){
                mp.insert({left,right});
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
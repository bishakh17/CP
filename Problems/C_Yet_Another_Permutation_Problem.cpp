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
    set<int> s;
    vector<int> ans;
    for(int i = 1; i<=n; i++) s.insert(i);
    while(!s.empty()){
        for(int i = 1; i<=n; i++){
            int temp = i;
            while(s.find(temp)!=s.end()){
                ans.push_back(temp);
                s.erase(temp);
                temp*=2;
            }
        }
    }
    for(auto i:ans) cout<<i<<" ";
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
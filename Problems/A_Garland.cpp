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
    int n = 4;
    unordered_map<char, int> mp;
    for(int i = 0; i<n; i++){
        mp[s[i]]++;
    }
    if(mp.size()==1) cout(-1); 
    else if(mp.size()>2) cout(4);
    else{
        auto it = mp.begin();
        if((*it).second == 2) cout(4);
        else cout(6);
    }

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
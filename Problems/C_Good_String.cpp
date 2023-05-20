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
    int ans = 0;
    vector<int> v(10, 0);
    for(int i = 0; i<n; i++){
        int x = s[i]-'0';
        v[x]++;
        ans = max(ans,v[x]);
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            int t = 0;
            int count = 0;
            for(int k = 0; k<n; k++){
                int x = s[k]-'0';
                if(!t and x==i) t = 1;
                else if(t and x==j){t = 0; count++;}
            }
            ans = max(ans, 2*count);
        }
    }
    cout(n-ans);
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
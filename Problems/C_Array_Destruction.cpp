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
    vector<int> a(2*n);
    for(int i=0; i<2*n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    multiset<int> s;
    multiset<int> s2;
    for(int i=0; i<2*n; i++) s.insert(-a[i]);
    s.erase(s.begin());
    s2 = s;
    for(int i = 0; i<2*n-1; i++){
        vector<pair<int,int>> ans;
        s = s2;
        s.erase(s.find(-a[i]));
        int prev = a[2*n-1];
        ans.push_back({a[2*n-1], a[i]});
        int tot = prev + a[i];
        while(!s.empty()){
            int x = -(*s.begin());
            s.erase(s.begin());
            if(s.find(x-prev) == s.end()) break;
            s.erase(s.find(x-prev));
            ans.push_back({x, prev-x});
            prev = x;
        }
        if(s.empty()){
            cout<<"YES"<<endl;
            cout<<tot<<endl;
            for(auto x: ans) cout<<x.first<<" "<<x.second<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
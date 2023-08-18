#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n, m; cin>>n>>m;
    vector<int> a(m);
    string s(m,'0');
    for(int i = 0; i<m; i++){
        s[i]='1';
        cout<<"? "<<s<<endl;
        cout.flush();
        cin>>a[i];
        s[i] = '0';
    }
    priority_queue<pair<int,int>> q;
    for(int i = 0; i<m; i++){
        q.push({-a[i],i});
    }
    int prev = 0;

    while(!q.empty()){
        auto curr = q.top();
        q.pop();
        int val = -curr.first;
        int idx = curr.second;
        s[idx] = '1';
        cout<<"? "<<s<<endl;
        cout.flush();
        int x; cin>>x;
        if(prev+val!=x) s[idx] = '0';
        else prev = x;
    }
    cout<<"! "<<prev<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
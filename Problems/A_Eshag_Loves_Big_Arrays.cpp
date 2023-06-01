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
    vector<int> v(n);
    int mini = INT64_MAX;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        mini = min(mini, v[i]);
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        if(v[i] > mini) count++;
    }
    cout<<count<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
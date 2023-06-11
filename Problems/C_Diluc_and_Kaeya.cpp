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
    int d = 0, k = 0;
    map<pair<int,int>,int> mp;
    for(int i=0; i<n; i++){
        if(s[i] == 'D') d++;
        else k++;
        if(d==0 || k==0){
            cout<<d+k<<" ";
            continue;
        }
        int g = __gcd(d,k);
        cout<<++mp[{d/g,k/g}]<<" ";
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
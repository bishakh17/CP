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
    vector<int> a(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]>1){
            cout<<"NO"<<endl;
            return;
        }
    }
    int k = n;
    for(int i = 0; i<a.size(); i++){
        for(int j = 0; j<a.size(); j++){
            if(i==j) continue;
            int diff = abs(a[i]-a[j]);
            if(mp[diff]==0){
                mp[diff]++;
                a.push_back(diff);
                k++;
                if(k>300){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    cout<<k<<endl;
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
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
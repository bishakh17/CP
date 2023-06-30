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
    vector<int> b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    vector<int> tempa = a;
    vector<int> tempb = b;
    sort(tempa.begin(), tempa.end());
    sort(tempb.begin(), tempb.end());
    vector<pair<int,int>> ans;
    for(int i = 0; i<n; i++){
        if(a[i]==tempa[i]) continue;
        int pos = -1;
        for(int j = i+1; j<n; j++){
            if(a[j]==tempa[i]){
                pos = j;
                break;
            }
        }
        swap(a[i], a[pos]);
        swap(b[i], b[pos]);
        ans.push_back({i+1, pos+1});
    }
    for(int i = 0; i<n; i++){
        if(b[i]==tempb[i]) continue;
        int pos = -1;
        for(int j = i+1; j<n; j++){
            if(b[j]==tempb[i] and a[i]==a[j]){
                pos = j;
            }
        }
        if(pos==-1){
            cout(-1);
            return;
        }
        swap(b[i], b[pos]);
        ans.push_back({i+1, pos+1});
    }
    cout(ans.size());
    for(auto x: ans){
        cout<<x.first<<" "<<x.second<<endl;
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
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
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    vector<pair<int,int>> temp(1e5+1,{0,0});
    for(int i=0; i<n; i++){
        if(i%2==0) temp[b[i]].first++;
        else temp[b[i]].second++;
    }
    for(int i = 0; i<n; i++){
        if(i%2==0){
            if(!temp[a[i]].first){
                cout<<"NO"<<endl;
                return;
            }
            temp[a[i]].first--;
        }
        else{
            if(!temp[a[i]].second){
                cout<<"NO"<<endl;
                return;
            }
            temp[a[i]].second--;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
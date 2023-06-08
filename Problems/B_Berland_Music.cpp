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
    string s; cin>>s;
    map<int,int> liked;
    map<int,int> disliked;
    for(int i = 0; i<n; i++){
        if(s[i]=='1'){
            liked[a[i]]++;
        }
        else{
            disliked[a[i]]++;
        }
    }
    int r = 1;
    for(auto x : disliked){
        disliked[x.first] = r;
        r++;
    }
    for(auto x : liked){
        liked[x.first] = r;
        r++;
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='1') cout<<liked[a[i]]<<" ";
        else cout<<disliked[a[i]]<<" ";
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
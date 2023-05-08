#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,m; cin>>n>>m;
    vector<int> a;
    int one = 0;
    int two = 0;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        if(x==-1) one++;
        else if(x==-2) two++;
        else a.push_back(x);
    }
    if(a.size()==0){cout(min(m,max(one,two))); return;}
    sort(a.begin(), a.end());
    int ans = 0;
    a.erase(unique(a.begin(),a.end()),a.end());
    int k = a.size();
    ans = min(m,max(one,two)+k);
    for(int i = 0; i<k; i++){
        int left = i+min(one,a[i]-1-i);
        int right = k-i-1 + min(two,m-a[i]-k+i+1);
        ans = max(ans, left+right+1);
    }
    cout(ans);



}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
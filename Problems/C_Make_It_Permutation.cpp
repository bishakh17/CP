#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,c,d; cin>>n>>c>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int temp = 0;
    vector<int> b;
    b.push_back(a[0]);
    for(int i = 1; i<n; i++){
        if(a[i] == a[i-1]) temp++;
        else b.push_back(a[i]);
    }
    int ans = INT64_MAX;
    int gap = 0;
    int gg = 0;
    if(b[0]!=1) gg+=d;
    int count = 1;
    if(gg) count++;
    for(int i=0;i<b.size();i++){
        if(b[i]!=count){
            int cost = gap*d + (b.size()-i)*c;
            ans = min(ans,cost);
            gap+=b[i]-count;
            count = b[i];
        }
        count++;
    }
    int cost = gap*d;
    ans = min(ans,cost);
    ans+=temp*c;
    ans+=gg;
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
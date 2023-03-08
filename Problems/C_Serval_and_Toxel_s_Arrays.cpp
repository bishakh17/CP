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
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    vector<int> track(m+n+1,-1);
    vector<int> count(m+n+1,0);
    for(int i = 0; i<n; i++) track[a[i]] = 0;
    for(int i = 1; i<=m; i++){
        int pos, x; cin>>pos>>x;
        pos--;
        if(a[pos]==x) continue;
        int temp = i - track[a[pos]];
        count[a[pos]] += temp;
        track[x] = i;
        track[a[pos]] = -i;
        a[pos] = x;
    }
    for(int i = 1; i<=m+n; i++){
        if(track[i]>=0){
            int temp = m+1 - track[i];
            count[i] += temp;
        }
    }
    int ans = 0;
    for(int i = 1; i<=m+n; i++){
        ans+=count[i]*(count[i]-1)/2;
        ans+=count[i]*(m+1-count[i]);
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
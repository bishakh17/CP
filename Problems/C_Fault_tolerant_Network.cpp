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
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int cost1 = INT64_MAX, cost2 = INT64_MAX;
    for(int i = 0; i<n; i++){
        cost1 = min(cost1, abs(a[0]-b[i]));
        cost2 = min(cost2, abs(a[n-1]-b[i]));
    }
    int cost3 = INT64_MAX, cost4 = INT64_MAX;
    for(int i = 0; i<n; i++){
        cost3 = min(cost3, abs(a[i]-b[0]));
        cost4 = min(cost4, abs(a[i]-b[n-1]));
    }
    int ans1 = cost1 + cost2 + cost3 + cost4;
    int ans2 = cost1 + cost2 + cost3 + cost4;
    ans1 = min(ans1, ans1-cost1-cost3+abs(a[0]-b[0]));
    ans1 = min(ans1, ans1-cost2-cost4+abs(a[n-1]-b[n-1]));
    ans2 = min(ans2, ans2-cost1-cost4+abs(a[0]-b[n-1]));
    ans2 = min(ans2, ans2-cost2-cost3+abs(a[n-1]-b[0]));
    cout<<min(ans1, ans2)<<endl;
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
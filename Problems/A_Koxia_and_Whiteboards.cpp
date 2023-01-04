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
    priority_queue<int> nums;
    vector<int> change(m);
    int ans = 0;
    for(int i = 0; i<n; i++){
        int x; cin>>x;
        ans+=x;
        nums.push(-x);
    }
    for(int i = 0; i<m; i++){
        int x; cin>>x;
        int top = -nums.top();
        ans = ans - top + x;
        nums.pop();
        nums.push(-x);
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
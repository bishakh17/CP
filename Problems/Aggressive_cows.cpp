#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

bool check(vector<int>& a, int c, int mid) {
    int count = 1;
    int last = a[0];
    for(int i=1;i<a.size();i++) {
        if(a[i] - last >= mid) {
            count++;
            last = a[i];
        }
    }
    return count >= c;
}

void solve(){
    int n,c; cin>>n>>c;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int l = 1, r = a[n-1] - a[0];
    int ans = 0;

    while (l<=r) {
        int mid = l + (r-l)/2;
        if(check(a,c,mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }

    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
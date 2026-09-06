#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) { cin>>a[i]; }
    sort(a.begin(), a.end());
    int min = a[0];
    int cnt = 1;
    for(int i = 1; i<n; i++){
        if(i*(a[i]-a[i-1])<=k) {
            k -= i*(a[i]-a[i-1]);
            cnt++;
            min = a[i];
        } else {
            min += k/i;
            cnt -= k%i;
            k = 0;
            break;
        }
    }
    min += k/n;
    cnt -= k%n;
    int ans = min*n - (cnt - 1);
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
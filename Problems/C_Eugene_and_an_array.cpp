#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[i] = a[i-1] + x;
    }
    unordered_map<int, int> freq;
    freq[0]++;
    int l = 0;
    int ans = 0;
    for(int r = 1; r <= n; r++){
        while(freq[a[r]] > 0){
            freq[a[l]]--;
            l++;
        }
        freq[a[r]]++;
        ans += r - l;
    }
    cout<<ans<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;

void print128(__int128 x) {
    if (x < 0) {
        cout << '-';
        x = -x;
    }
    if (x > 9) print128(x / 10);
    cout << (char)('0' + (x % 10));
}


void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin>>a[i];
    __int128 ans = 0;
    int j = n-1;
    for(int i = n-1; i >= 0; i--) {
        ans += (__int128)j * a[i];
        j-=2;
    }
    map<int, int> freq;
    for(int i = 0; i<n; i++){
        freq[a[i]]++;
        ans += freq[a[i]+1];
        ans -= freq[a[i]-1];
    }
    print128(ans);
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
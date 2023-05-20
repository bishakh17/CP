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
    int sm = 0;
    for(int i = 0; i<n; i++){int x; cin>>x; sm+=x; a[i] = x%k;}
    sort(a.begin(), a.end());
    int i = 0; int j = n-1;
    int extra = 0;
    while(i<j){
        if(a[i]+a[j]<k){extra+=a[i]; i++; continue;}
        extra += (a[i]+a[j])%k;
        i++; j--;
    }
    if(i==j) extra += a[i];
    cout((sm-extra)/k);

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
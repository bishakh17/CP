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
    vector<int> a(n), w(k);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>w[i];
    sort(a.begin(), a.end());
    sort(w.begin(), w.end());
    int ans = 0;
    int i = 0; int j = n-1;
    while(i<k and w[i]==1){
        ans += 2*a[j];
        j--;
        i++;
    }
    while(i<k and w[i]==2){
        ans+= a[j];
        ans+= a[j-1];
        j-=2;
        i++;
    }
    i = k-1;
    int j2 = 0;
    while(i>=0 and w[i]>2){
        ans+= a[j2];
        ans+= a[j];
        j--;
        j2+= w[i]-1;
        i--;
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
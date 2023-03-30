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
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> b(n);
    for(int i=0; i<n; i++) cin>>b[i];
    vector<int> mini(n);
    vector<int> maxi(n);
    for(int i = 0; i<n; i++){
        int temp = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        mini[i] = b[temp] - a[i];
    }
    int curr = b[n-1];
    for(int i = n-1; i>=0; i--){
       maxi[i] = curr - a[i];
       if(i>0 and b[i-1]<a[i]) curr = b[i-1];
    }
    for(int i = 0; i<n; i++){
        cout<<mini[i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<maxi[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
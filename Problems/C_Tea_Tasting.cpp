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
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    vector<int> sum_b(n+1, 0);
    for(int i=0; i<n; i++) sum_b[i+1] = sum_b[i] + b[i];
    vector<int> index(n+1,0);
    vector<int> extra(n+1,0);
    for(int i=0; i<n; i++){
        int temp = lower_bound(sum_b.begin(), sum_b.end(), a[i]+sum_b[i]) - sum_b.begin();
        if(sum_b[temp]!=a[i]+sum_b[i])temp--;
        extra[temp] += a[i] - (sum_b[temp]-sum_b[i]);
        index[i]++;
        index[temp]--;
    }
    for(int i = 1; i<=n; i++){
        index[i] = index[i-1]+index[i];
    }
    for(int i = 0; i<n; i++){
        cout<<index[i]*b[i]+extra[i]<<" ";
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
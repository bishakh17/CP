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
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double avg = (double)sum/(double)n;
    if(avg*2!=(int)(avg*2)){
        cout<<0<<endl;
        return;
    }
    int temp = avg*2;
    map<int,int> mp;
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans += mp[temp-a[i]];
        mp[a[i]]++;
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
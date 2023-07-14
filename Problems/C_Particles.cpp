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
    int t = 1;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>0) t = 0;
    }
    if(t){
        cout(*max_element(a.begin(), a.end()));
        return;
    }
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i<n; i+=2){
        if(a[i]>0) sum1+=a[i];
    }
    for(int i = 1; i<n; i+=2){
        if(a[i]>0) sum2+=a[i];
    }
    if(sum1>sum2) cout<<sum1<<endl;
    else cout<<sum2<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
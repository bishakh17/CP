#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    vector<int> a(3);
    for(int i=0; i<3; i++) cin>>a[i];
    sort(a.begin(), a.end());
    if(a[2]==a[0]+a[1]){
        cout<<"YES"<<endl;
        return;
    }
    if(a[0]==a[1] and a[2]%2==0){
        cout<<"YES"<<endl;
        return;
    }
    if(a[1]==a[2] and a[0]%2==0){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
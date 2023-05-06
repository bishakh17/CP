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
    int twos = 0, ones = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 1) ones++;
        else twos++;
    }
    if(twos%2){cout(-1); return;}
    twos/=2;
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(a[i]==2) twos--;
        if(!twos){ans = i; break;}
    }
    cout(ans+1);

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
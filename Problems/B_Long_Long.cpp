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
    for(int i=0;i<n;i++) cin>>a[i];
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+= abs(a[i]);
    }
    int i = 0;
    while(i<n and a[i]>=0)i++;
    if(i==n){
        cout<<sum<<" "<<0<<endl;
        return;
    }
    int seg = 1;
    i++;
    while(i<n){
        if(a[i]<=0){
            i++;
            continue;
        }
        while(i<n and a[i]>=0)i++;
        if(i<n) seg++;
    }
    cout<<sum<<" "<<seg<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
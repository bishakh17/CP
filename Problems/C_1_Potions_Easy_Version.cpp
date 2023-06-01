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
    for(int i = 0; i<n; i++) cin>>a[i];
    priority_queue<int> p;
    int temp = 0;
    int h = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>=0){h+=a[i]; continue;}
        h+=a[i];
        p.push(-a[i]);
        while(h<0){
            int curr = p.top();
            p.pop();
            h+=curr;
            temp++;
        }
    }
    cout<<n-temp<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
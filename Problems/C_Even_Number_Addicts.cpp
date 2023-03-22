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
    int odd = 0, even = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0) even++;
        else odd++;
    }
    if(n%2==0){
        if(odd%2) cout("Alice");
        else if((odd/2)%2==0) cout("Alice");
        else cout("Bob");
    }
    else{
        if(odd%2){
            if((odd-1)%4==0) cout("Bob");
            else cout("Alice");
        }
        else{
            if((odd/2)%2==0) cout("Alice");
            else cout("Bob");
        }
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
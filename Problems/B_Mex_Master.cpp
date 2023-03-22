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
    int count0 = 0;
    int count1 = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) count0++;
        if(a[i]==1) count1++;
    }
    if(2*count0 - n <= 1) cout(0);
    else if(count1==0 or count1+count0<n) cout(1);
    else cout(2);
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
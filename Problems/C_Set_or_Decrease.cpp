#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    int sum = 0;
    for(int i=0; i<n; i++){cin>>a[i]; sum+=a[i];}
    sort(a.begin(), a.end());
    int red = sum-k;
    if(red<=0){cout(0); return;}
    int ans = red;
    int temp = a[0];
    for(int j = n-1; j>=1; j--){
        temp+=a[j];
        int x = (temp-red)/(n-j+1);
        if(red>temp and (temp-red)%(n-j+1)!=0) x--;
        if(x<a[0]) ans = min(ans,n-j+a[0]-x);
        else ans = min(ans,n-j);
    }
    cout(ans);
    
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
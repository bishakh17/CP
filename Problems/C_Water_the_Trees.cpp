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
    int maxi = -1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    int t1 = 0;
    int t2 = 0;
    for(int i = 0; i<n; i++){
        int temp = maxi-a[i];
        if(temp%2) t1++;
        t2 += temp/2;
    }
    int ans = max(2*t1-1,2*t2);
    if(t1<=t2){
        int gg = t2-t1;
        gg/=3;
        t1+=(2*gg);
        t2-=gg;
        if(t2-2==t1){
            t1+=2;
            t2--;
        }
        ans = min(ans,max(2*t1-1,2*t2));
    }
    t1 = 0;
    t2 = 0;
    maxi++;
    for(int i = 0; i<n; i++){
        int temp = maxi-a[i];
        if(temp%2) t1++;
        t2 += temp/2;
    }
    ans = min(ans,max(2*t1-1,2*t2));
    if(t1<=t2){
        int gg = t2-t1;
        gg/=3;
        t1+=(2*gg);
        t2-=gg;
        if(t2-2==t1){
            t1+=2;
            t2--;
        }
        ans = min(ans,max(2*t1-1,2*t2));
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
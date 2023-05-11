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
    vector<int> b = a;
    sort(b.begin(),b.end());
    int mex = 0;
    for(int i = 0; i<n; i++){if(b[i]==mex) mex++;}
    int l = -1; int r = -1;
    for(int i = 0; i<n; i++){
        if(a[i]==mex+1){
            if(l==-1) l = i;
            r = i;
        }
    }
    if(l==-1){
        if(b[n-1]>mex){
            cout("YES");
            return;
        }
        int i = 1;
        int t = 0;
        while(i<n and b[i]<mex){
            if(b[i]==b[i-1]) t = 1;
            i++;
        }
        if(t==1){
            cout("YES");
            return;
        }
        cout("NO");
        return;
    }

    b.clear();
    for(int i = 0; i<n; i++){
        if(i>=l and i<=r) continue;
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    int temp = 0;
    for(int i = 0; i<b.size(); i++){if(b[i]==temp) temp++;}
    if(temp==mex){
        cout("YES");
        return;
    }
    cout("NO");
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
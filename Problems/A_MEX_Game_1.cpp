#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int x; 
        cin>>x;
        a[x]++;
    }
    int t =0;
    int mex = -1;
    for(int i = 0; i<n; i++){
        if(a[i]==0){
            mex = i;
            break;
        }
        if(a[i]==1 and t==0){
            t = 1;
        }
        else if(a[i]==1 and t==1){
            mex = i;
            break;
        }
    }
    if (mex==-1){
        mex = n;
    }
    cout<<mex<<endl;
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
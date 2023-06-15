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
    vector<int> a(n,-1);
    int mx = 1;
    for(int j = 2; j<=n; j++){
        int x,y;
        cout<<"? "<<mx<<" "<<j<<endl;
        cout.flush();
        cin>>x;
        cout<<"? "<<j<<" "<<mx<<endl;
        cout.flush();
        cin>>y;
        if(x>y){
            a[mx-1] = x;
            mx = j;
        }
        else{
            a[j-1] = y;
        }
    }
    a[mx-1] = n;
    cout<<"! ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
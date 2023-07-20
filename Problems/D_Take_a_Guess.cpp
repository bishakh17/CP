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
    cout<<"and "<<1<<" "<<2<<endl;
    cout.flush();
    int x1; cin>>x1;
    cout<<"or "<<1<<" "<<2<<endl;
    cout.flush();
    int x2; cin>>x2;
    cout<<"and "<<2<<" "<<3<<endl;
    cout.flush();
    int y1; cin>>y1;
    cout<<"or "<<2<<" "<<3<<endl;
    cout.flush();
    int y2; cin>>y2;
    cout<<"and "<<1<<" "<<3<<endl;
    cout.flush();
    int z1; cin>>z1;
    cout<<"or "<<1<<" "<<3<<endl;
    cout.flush();
    int z2; cin>>z2;
    a[0] = x1+x2-y1-y2+z1+z2;
    a[0]/=2;
    a[1] = x1+x2-a[0];
    a[2] = z1+z2-a[0];
    for(int i = 3; i<n; i++){
        cout<<"and "<<1<<" "<<i+1<<endl;
        cout.flush();
        int x; cin>>x;
        cout<<"or "<<1<<" "<<i+1<<endl;
        cout.flush();
        int y; cin>>y;
        a[i] = x+y-a[0];
    }
    sort(a.begin(), a.end());
    cout<<"finish "<<a[k-1]<<endl;
}

int32_t main(){
    fastio;
    // cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
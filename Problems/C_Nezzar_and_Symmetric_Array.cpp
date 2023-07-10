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
    vector<int> a(2*n);
    int t = 1;
    for(int i=0; i<2*n; i++){
        cin>>a[i];
        if(a[i]%2==1){
            t = 0;
        }
    }
    if(!t){
        cout<<"NO"<<endl;
        return;
    }
    sort(a.begin(), a.end());
    for(int i=0; i<2*n; i+=2){
        if(a[i]!=a[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    a.resize(unique(a.begin(), a.end()) - a.begin());
    vector<int> ans(n);
    ans[n-1] = a[n-1]/n; 
    for(int i = n-2; i>=0; i--){
        int temp = a[i] - ans[i+1];
        temp /= (i+1);
        ans[i] = temp+ans[i+1];
    }
    vector<int> gg(n);
    gg[n-1] = ans[n-1];
    if(gg[n-1]<=0){
        cout<<"NO"<<endl;
        return;
    }
    for(int i = n-2; i>=0; i--){
        gg[i] = ans[i] - ans[i+1];
        if(gg[i]>=gg[i+1] or gg[i]<=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;


}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
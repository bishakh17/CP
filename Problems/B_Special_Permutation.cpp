#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,a,b; cin>>n>>a>>b;
    int k = n/2;
    if(b<k){
        cout<<-1<<endl;
        return;
    }
    if(b==k){
        if(a!=k+1){
            cout<<-1<<endl;
            return;
        }
        else{
            for(int i=n;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<endl;
            return;
        }
    }
    if(a>k){
        cout<<-1<<endl;
        return;
    }
    int t = n;
    while(t>b){
        cout<<t<<" ";
        t--;
    }
    t = a;
    while(t<=b){
        cout<<t<<" ";
        t++;
    }
    t = 1;
    while(t<a){
        cout<<t<<" ";
        t++;
    }
    cout<<endl;

}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
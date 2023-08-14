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
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    int m; cin>>m;
    vector<int> c(m);
    for(int i=0;i<m;i++) cin>>c[i];
    for(int i = 0; i<n; i++){
        if(a[i]<b[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    map<int,int> mp;
    for(int i = 0; i<m; i++){
        mp[c[i]]++;
    }
    vector<int> prevGreater(n,-1);
    for(int i = 1; i<n; i++){
        int j = i-1;
        while(j!=-1 and b[j]<b[i]){
            j = prevGreater[j];
        }
        prevGreater[i] = j;
    }
    vector<int> temp(n,0);
    for(int i = 0; i<n; i++){
        if(prevGreater[i]==-1 or b[prevGreater[i]]!=b[i]){
            if(a[i]>b[i]){
                mp[b[i]]--;
                temp[i] = 1;
            }
            if(mp[b[i]]<0){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(temp[prevGreater[i]]==0){
            if(a[i]>b[i]){
                mp[b[i]]--;
                temp[i] = 1;
            }
            if(mp[b[i]]<0){
                cout<<"NO"<<endl;
                return;
            }
        }
        else{
            temp[i] = 1;
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
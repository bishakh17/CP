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
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a.begin(),a.end());
    vector<pair<int,int>> ans(n);
    vector<pair<int,int>> temp(n+1,{0,0});
    int p = 1, q = 1;
    for(int i = 0; i<n; i++){
        if(q>n || p>n){
            cout("NO");
            return;
        }
        if(temp[a[i].first].first==0){
            temp[a[i].first].first = 1;
            temp[q].second = 1;
            if(q>a[i].first){
                cout("NO");
                return;
            }
            ans[a[i].second] = {a[i].first,q};
            while(q<=n && temp[q].second==1){
                q++;
            }
            while(p<=n && temp[p].first==1){
                p++;
            }
        }
        else if(temp[a[i].first].second==0){
            temp[a[i].first].second = 1;
            temp[p].first = 1;
            if(p>a[i].first){
                cout("NO");
                return;
            }
            ans[a[i].second] = {p,a[i].first};
            while(p<=n && temp[p].first==1){
                p++;
            }
            while(q<=n && temp[q].second==1){
                q++;
            }
        }
        else{
            cout("NO");
            return;
        }
    }
    cout("YES");
    for (int i = 0; i < n; i++){
        cout<<ans[i].first<<" ";
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout<<ans[i].second<<" ";
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
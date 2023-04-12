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
    map<int,int> a;
    map<int,int> b;
    int t = 1; 
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a[x]++;
    }
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(a[x]){a[x]--;}
        else b[x]++;
        if(a[x]==0) a.erase(x);
    }
    if(!a.size()) {cout(0); return;}
    auto itr1 = --a.end();
    auto itr2 = --b.end();
    int ans = 0;

    while(true and t){
        if(itr1->first>=10){
            int temp = itr1->first;
            int k = itr1->second;
            if(itr1==a.begin()) t = 0;
            itr1--;
            a.erase(temp);
            temp = log10(temp)+1;
            if(k>b[temp]) a[temp] = a[temp] + k - b[temp];
            b[temp] = b[temp] - min(b[temp],k);
            if(b[temp]==0) b.erase(temp);
            ans+=k;
        }
        else break;
    }
    
    while(true and t){
        if(itr2->first>=10){
            int temp = itr2->first;
            int k = itr2->second;
            if(itr2==b.begin()) t = 0;
            itr2--;
            b.erase(temp);
            temp = log10(temp)+1;
            if(k>a[temp]) b[temp] = b[temp] + k - a[temp];
            a[temp] = a[temp] - min(a[temp],k);
            if(a[temp]==0) a.erase(temp);
            ans+=k;
        }
        else break;
    }
    for(auto i : a) if(i.first!=1) ans += i.second;
    for(auto i : b) if(i.first!=1) ans += i.second;

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
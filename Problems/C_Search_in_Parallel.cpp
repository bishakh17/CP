#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    int n,s1,s2; cin>>n>>s1>>s2;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(),a.end());
    vector<int> ans1;
    vector<int> ans2;
    int count1 = s1;
    int count2 = s2;
    for(int i = n-1; i>=0; i--){
        if(count1<count2){
            ans1.push_back(a[i].second);
            count1 += s1;
        }
        else{
            ans2.push_back(a[i].second);
            count2 += s2;
        }
    }
    cout<<ans1.size()<<" ";
    for(auto x: ans1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<ans2.size()<<" ";
    for(auto x: ans2){
        cout<<x<<" ";
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
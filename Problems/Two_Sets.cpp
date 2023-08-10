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
    int sum = n*(n+1)/2;
    if(sum%2){
        cout<<"NO"<<endl;
        return;
    }
    vector<int> a,b;
    int target = sum/2;
    if(n%2){
        for(int i = 1; i<=n; i++){
            int temp = i%8;
            if(temp==1 or temp==2 or temp==4 or temp==7){
                a.push_back(i);
            }
            else{
                b.push_back(i);
            }
        }
    }
    else{
        for(int i = 1; i<=n/2; i++){
            if(i%2){
                a.push_back(i);
                a.push_back(n-i+1);
            }
            else{
                b.push_back(i);
                b.push_back(n-i+1);
            }
        }
    }
    cout<<"YES"<<endl;
    cout<<a.size()<<endl;
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<b.size()<<endl;
    for(auto x:b){
        cout<<x<<" ";
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
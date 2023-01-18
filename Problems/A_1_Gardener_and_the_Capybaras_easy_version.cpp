#include <iostream>
#include<bits/stdc++.h>
using namespace std;


#define endl "\n"
#define int long long
#define cout(x) cout<<(x)<<endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int T = 1;


void solve(){
    string s; cin>>s;
    int n = s.size();
    int high = -1;
    int low = -1;
    for(int i = 0; i<n; i++){
        if(s[i]=='a'){low = i; break;}
    }
    for(int i = 0; i<n; i++){
        if(s[i]=='b'){high = i; break;}
    }
    if(high==-1){
        cout<<'a'<<" ";
        for(int i = 0; i<n-2; i++){cout<<'a';}
        cout<<" "<<'a'<<endl;
        return;
    }
    if(low==-1){
        cout<<'b'<<" ";
        for(int i = 0; i<n-2; i++){cout<<'b';}
        cout<<" "<<'b'<<endl;
        return;
    }
    if(low==n-1){
        cout<<'b'<<" ";
        for(int i = 0; i<n-2; i++){cout<<'b';}
        cout<<" "<<'a'<<endl;
        return;
    }
    if(high==n-1){
        for(int i = 0; i<n-2; i++){cout<<'a';}
        cout<<" "<<'a'<<" "<<'b'<<endl;
        return;
    }
    if(low==0){
        for(int i = 0; i<high; i++){cout<<'a';}
        cout<<" ";
        for(int i = high; i<n-1; i++){cout<<s[i];}
        cout<<" "<<s[n-1]<<endl;
        return;
    }
    if(high==0){
        for(int i = 0; i<low; i++){cout<<'b';}
        cout<<" "<<'a'<<" ";
        for(int i = low+1; i<n; i++){cout<<s[i];}
        cout<<endl;
        return;
    }
}

int32_t main(){
    fastio;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
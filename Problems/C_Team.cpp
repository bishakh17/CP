#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin>>n>>m;
    if(m>(n+1)*2 or n>m+1){
        cout<<-1<<endl;
        return;
    }
    int l = m+n;
    string s(l,'1');
    int t = 0;
    if(n>m){
        t = 1;
    }
    int k = 0;
    for(int i = 0; i<l; i++){
        if(t==1){
            s[i] = '0';
            t = 0;
            n--;
            k = 0;
        }
        else{
            s[i] = '1';
            m--;
            k++;
        }
        if(n>m or k==2){
            t = 1;
        }
    }
    cout<<s<<endl;
    return;
    
}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
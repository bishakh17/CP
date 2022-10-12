#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    int t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        int i = 0;
        while(i<n){
            if(s[i]=='G'){
                i++;
            }
            else if(i+1<n){
                if(s[i+1] == 'B'){
                    i++;
                }
                else{
                    s[i]='G';
                    s[i+1]='B';
                    i = i+2;
                }
            }
            else i++;
        }
    }
    cout<<s<<endl;
}

int main(){
    int T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;



void solve(){
    string s;
    int t = 0;
    for(int i = 0; i<8; i++){
        cin>>s;
        int g = 1;
        for(int i = 0; i<8; i++){
            if(s[i]=='B') g = 0;
        }
        if(g) t = 1;

    }
    if(t) cout<<"R"<<endl;
    else cout<<"B"<<endl;
    return;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
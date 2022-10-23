#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long m,s;
    cin>>m>>s;
    string mini;
    string maxi;
    if(m==1 and s<10){
        cout<<s<<" "<<s<<endl;
        return;
    }
    if(s>9*m or !s){
        cout<<"-1 -1 "<<endl;
        return;
    }
    for(long long i = 0; i<m; i++){
        if(s>9){
            maxi.push_back('9');
            s = s - 9;
        }
        else{
            maxi.push_back(s+'0');
            s = s - s; 
        }
    } 
    mini = maxi;
    reverse(mini.begin(),mini.end());
    if(mini[0]=='0'){
        mini[0] = '1';
        int i = 1;
        while(mini[i]=='0'){
            i++;
        }
        mini[i]--;
    }
    cout<<mini<<" "<<maxi<<endl;
    return;
}

int main(){
    long long T;
    T = 1;
    while(T--){
        solve();
    }
    return 0;
}
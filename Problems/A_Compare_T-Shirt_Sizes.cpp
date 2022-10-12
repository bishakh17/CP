#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    string a;
    string b;
    cin>>a>>b;
    long long int la = a.size();
    long long int lb = b.size();
    if(a[la-1]==b[lb-1]){
        if(la==lb) cout<<"="<<endl;
        else if((la>lb and a[la-1]=='S') or (la<lb and a[la-1]=='L')) cout<<"<"<<endl;
        else if((la>lb and a[la-1]=='L') or (la<lb and a[la-1]=='S')) cout<<">"<<endl;
    }
    else if(a[la-1]=='S') cout<<"<"<<endl;
    else if(a[la-1]=='L') cout<<">"<<endl;
    else if(b[lb-1]=='S') cout<<">"<<endl;
    else if(a[la-1]=='L') cout<<"<"<<endl;
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
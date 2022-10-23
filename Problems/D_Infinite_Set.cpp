#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    long long n,p;
    cin>>n>>p;
    queue<long long> q;
    long long m = pow(2,p);
    for(long long i = 0; i<n; i++){
        long long x;
        cin>>x;
        if(x<m)q.push(x);
    }
    unordered_set<int> s;
    while(!q.empty()){
        long long curr = q.front();
        q.pop();
        s.insert(curr);
        long long x1 = curr*2 + 1;
        long long x2 = curr*4;
        if(x1<m)q.push(x1);
        if(x2<m)q.push(x2);
    }
    cout<<s.size()<<endl;
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
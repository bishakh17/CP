#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        int t = n;
        n = n-1;
        n = n/2+1;
        int ans = (n)*(2*n+1)*(2*n-1)/3;
        n = t;
        int temp = (2*n-1)/4 + 1;
        ans+= (temp/2)*(2*(2*n-1)+(temp-1)*(-4));
        cout<<ans<<endl;
    }
    else{
        n = n/2 + 1;
        int ans = (n)*(2*n+1)*(2*n-1)/3;
        cout<<ans<<endl;
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
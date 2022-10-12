#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        while(n){
            cout<<n<<" ";
            n--;
        }
    }
    else{
        if(n==3) cout<<-1;
        else{
            int t = n/2 + 1;
            while(t<=n){
                cout<<t<<" ";
                t++;
            }
            t = n/2;
            while(t){
                cout<<t<<" ";
                t--;
            }
        }
    }
    cout<<endl;
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
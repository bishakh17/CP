#include <iostream>
#include <vector>
using namespace std;

void Solve(){
    int n,m;
    cin>>n>>m;


    string a,b;
    cin>>a>>b;

    int k = a.size()-b.size();
    if(k==0){
        if(a==b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else if(k<0){
        cout<<"No\n";
    }
    else{
        for(int i = 1; i<b.size(); i++){
            if(b[i]!=a[i+k]){
                cout<<"NO\n";
                return;
            }
        }
        for(int i = 0; i<k+1; i++){
            if(b[0]==a[i]){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";

    }
}



int main (){

    int T;

    cin>>T;

    while(T--){
        Solve();
    }
    return 0;
}
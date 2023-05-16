#include<bits/stdc++.h>
using namespace std;

//detects prims<=n
#define n 1e6

vector<int> prime(n+1,1);
void sieve(){
    prime[0] = 0;
    prime[1] = 0;
    for(int i = 2; i*i<=n; i++){
        if(prime[i]==1){
            for(int j = i*i; j<=n; j+=i){
                if(prime[j]==1) prime[j] = i;
            }
        }
    }
}
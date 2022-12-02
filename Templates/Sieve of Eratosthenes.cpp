#include<bits/stdc++.h>
using namespace std;

//detects prims<=n
#define n 1e6

//populates only odd numbers for efficiency
vector<bool> prime(n+1,true);
void sieve(){
    prime[0] = false;
    prime[1] = false;
    for (int i = 3; i*i <= n; i += 2) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i)
            prime[j] = false;
        }
    }
}

//check even numbers manually

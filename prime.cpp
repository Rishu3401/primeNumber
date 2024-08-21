#include <bits/stdc++.h>
using namespace std;

#define n 1001

bitset<n+1>primeNumber;

void sieve() {
    primeNumber.set();
    primeNumber[0]=primeNumber[1]=0;
    for(int i=2;i*i<=n;i++) {
        if(primeNumber[i]) {
            for(int j=i*i;j<=n;j+=i) {
                primeNumber[j] = 0;
            }
        }
    }
}

int main() {
    sieve(); 
    for (int i = 0; i < n; i++) {
        cout << i << " -> " << (primeNumber[i] ? "Prime Number" : "Not a Prime Number") << endl;
    }

    return 0;
}

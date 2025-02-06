#include <iostream>
#define p 1500000   // 피사노 주기 (mod 1,000,000)
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long int n; cin >> n;
    int k[p];   
    n %= p;
    
    k[0] = 0, k[1] = 1;
    for (int i = 2; i < p; i++) {
        k[i] = (k[i-1] + k[i-2]) % 1000000;
    }
    cout << k[n];
}

/*
피사노주기를 계산한 결과, 1,000,000으로 나누면 
주기가 1500000임.

n이 너무 크니까 피보나치 수를 계산하지 말고 mod한 배열을 구해서 출력값을 찾는다,
*/


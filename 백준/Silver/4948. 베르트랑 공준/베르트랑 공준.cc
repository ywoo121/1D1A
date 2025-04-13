#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num){
    if(num == 1) 
        return 0;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) 
            return 0;
    }
    return 1;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    while(1){
        int n; cin >> n;
        int cnt = 0;

        if(n == 0)
            break;
        else {
            for(int i = n+1; i <= 2 * n; i++) {
                if(is_prime(i)) cnt += 1;
            }
            cout << cnt << "\n";
        }
    }
}
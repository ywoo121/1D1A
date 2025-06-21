#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    long long n;
    int b;
    cin >> n >> b;

    if (b >= 64) {
        cout << "yes"; 
    } else {
        long long total = (1LL << (b + 1)) - 1; 
        if (n <= total) {
            cout << "yes";
        } else {
            cout << "no";
        }
    }
}

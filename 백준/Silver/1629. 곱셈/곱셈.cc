#include <iostream>
using namespace std;

long long solve(long long a, long long b, long long c) {
    if (b == 1) return a % c;

    if (b % 2 == 0) {
        long long tmp = solve(a, b / 2, c);
        return (tmp * tmp) % c;
    } else {
        long long tmp = solve(a, (b - 1) / 2, c);
        return (tmp * tmp % c * a) % c;
    }
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;
    return 0;
}

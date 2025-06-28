#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a = (int) n * 0.78;
    int b = (int) n * 0.8 + n * 0.2 * 0.78;
    cout << a << " " << b;
}
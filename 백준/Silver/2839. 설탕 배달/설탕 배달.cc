#include<iostream>
using namespace std;

int N;

int main(void) {
    cin >> N;
    int ans = 0;

    while (N >= 0) {
        if (N % 5 == 0) {
            ans += N / 5;
            cout << ans << endl;
            return 0; }
        else {
            N -= 3;
            ans++;
        }
    }
    cout << -1 << endl;
}
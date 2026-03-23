#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N; cin >> N;
    
    int ans = 1;
    int sum = 1;

    int start = 1;
    int end = 1;

    while (end != N) {
        if (sum == N) {
            ans++;
            end++;
            sum += end;
        } else if (sum < N) {
            end++;
            sum += end;
        } else {
            sum -= start;
            start++;
        }
    
    }
    cout << ans;
}
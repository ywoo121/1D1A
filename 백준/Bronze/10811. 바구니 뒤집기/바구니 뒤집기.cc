#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N, M; cin >> N >> M;

    vector<int> baskets(N);
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;
    }

    for (int m = 0; m < M; m++) {
        int i, j;
        cin >> i >> j;
        reverse(baskets.begin() + i - 1, baskets.begin() + j);
    }

    for (int i = 0; i < N; ++i) {
        cout << baskets[i] << " ";
    }
}

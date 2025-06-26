#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N; cin >> N;

    vector<long long> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }

    long long size;
    cin >> size;

    long long total = 0;

    for (int i = 0; i < N; ++i) {
        if (v[i] == 0) continue;
        long long c = (v[i] + size - 1) / size; 
        total += c * size;
    }

    cout << total << endl;

    return 0;
}

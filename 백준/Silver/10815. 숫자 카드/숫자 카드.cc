#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N; 
    if (!(cin >> N)) return 0;
    unordered_set<int> have;
    have.reserve(static_cast<size_t>(N) * 2); 
    have.max_load_factor(0.7f);

    for (int i = 0; i < N; ++i) {
        int x; cin >> x;
        have.insert(x);
    }

    int M; cin >> M;
    string out;
    out.reserve(M * 2);
    
    for (int i = 0; i < M; ++i) {
        int q; cin >> q;
        out += (have.find(q) != have.end()) ? '1' : '0';
        if (i + 1 < M) out += ' ';
    }

    cout << out << '\n';
    return 0;
}

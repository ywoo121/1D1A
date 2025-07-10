#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N, M; cin >> N >> M;

    unordered_set<string> unheard;
    vector<string> v;

    string name;
    for (int i = 0; i < N; ++i) {
        cin >> name; unheard.insert(name);
    }

    // 교집합 검사
    for (int i = 0; i < M; ++i) {
        cin >> name;
        if (unheard.find(name) != unheard.end()) {
            v.push_back(name);
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';
    for (const string& n : v) {
        cout << n << '\n';
    }
}

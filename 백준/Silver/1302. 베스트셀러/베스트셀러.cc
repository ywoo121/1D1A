#include <iostream>
#include <map>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;    // 책의 개수
    map<string, int> m;

    while (n--) {
        string book; cin >> book;

        // map 에 없으면
        if (m.find(book) == m.end()) {
            m.insert(make_pair(book, 1));
        } else {
            m[book]++;
        }
    }

    string best_book;
    int max_count = 0;

    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->second > max_count) {
            max_count = it->second;
            best_book = it->first;
        } else if (it->second == max_count) {
            best_book = min(best_book, it->first); // 비교
        }
    }

    cout << best_book << '\n';
    return 0;
}
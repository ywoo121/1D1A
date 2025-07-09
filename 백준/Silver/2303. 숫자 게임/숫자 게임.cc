#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N; cin >> N;

    int ans = 0;
    int max_mod = -1;


    // z카드 입력
    for (int i = 0; i < N; ++i) {
        vector<int> cards(5);
        for (int j = 0; j < 5; ++j) {
            cin >> cards[j];
        }

        int max_cnt = 0;

        // ㅏㅋ드 선택
        for (int a = 0; a < 5; ++a) {
            for (int b = a + 1; b < 5; ++b) {
                for (int c = b + 1; c < 5; ++c) {
                    int sum = cards[a] + cards[b] + cards[c];
                    int mod = sum % 10;
                    max_cnt = max(max_cnt, mod);
                }
            }
        }

        if (max_cnt >= max_mod) {
            max_mod = max_cnt;
            ans = i + 1;
        }
    }

    cout << ans << '\n';
}

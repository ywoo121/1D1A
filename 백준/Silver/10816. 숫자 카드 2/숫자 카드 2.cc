
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;    // 상근이가 가지고 있는 숫자 카드의 개수
    unordered_map<int, int> card_count;  // 카드 번호별 개수를 저장할 맵

    for (int i = 0; i < n; i++) {
        int card;
        cin >> card;
        card_count[card]++;  // 카운팅
    }

    int m; cin >> m;  
    vector<int> b(m);

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // 출력
    for (int i = 0; i < m; i++) {
        cout << card_count[b[i]] << " ";  // 맵에서 조회
    }

    return 0;
}

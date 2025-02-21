#include <iostream>
using namespace std;

void sol() {
    string s, p;
    cin >> s >> p;
    int sec = 0;   // 최소 시간 (초 단위)

    int i = 0;
    while (i < s.size()) {
        // p랑 같은 문자열이 있을 때
        if (s.substr(i, p.size()) == p) {
            sec++;
            i += p.size();

        } else {    // 같은 문자열이 아닐 때
            i++;
            sec++;
        }
    }
    cout << sec << '\n';
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t; cin >> t;    // 테스트케이스의 개수
    for (int i = 0; i < t; i++) {
        sol();
    }
}
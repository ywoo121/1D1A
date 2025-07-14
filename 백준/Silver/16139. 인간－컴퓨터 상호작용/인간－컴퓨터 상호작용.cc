#include <iostream>
using namespace std;

string str;      // 문자열 S

void sol(char a, int l, int r) {
    int cnt = 0;
    for (int i = l; i <= r; i++) {
        if (str[i] == a) {
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int main(void) {
    ios::sync_with_stdio(false); 
    cin >> str;
    int q; cin >> q;            // 질문의 수 q

    for (int i = 0; i < q; i++) {
        char a; cin >> a;
        int l; cin >> l;
        int r; cin >> r;

        sol(a, l, r);
    }
}

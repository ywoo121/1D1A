#include <iostream>
#include <unordered_map>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;    // 사이트 주소의 개수
    int m; cin >> m;    // 비밀번호를 찾으려는 사이트 수

    unordered_map<string, string> site_pw;

    // pair에 사이트-비번 쌍 넣기
    for (int i = 0; i < n; i++) {
        string site, pw;
        cin >> site >> pw;

        site_pw[site] = pw;
    }

    for (int i = 0; i < m; i++) {
        // 비밀번호를 찾으려는 사이트
        string target_site; cin >> target_site;

       cout << site_pw[target_site] << '\n';
    }
}
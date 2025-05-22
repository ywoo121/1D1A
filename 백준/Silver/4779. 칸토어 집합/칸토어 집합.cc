#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// 재귀적으로 가운데 공백을 만드는 함수
void makeCantor(string &s, int start, int end) {
    if (end - start < 3) return;

    int third = (end - start) / 3;

    // 가운데 구간을 공백으로 설정
    for (int i = start + third; i < start + 2 * third; i++) {
        s[i] = ' ';
    }

    // 좌, 우 구간에 대해 재귀 호출
    makeCantor(s, start, start + third);
    makeCantor(s, start + 2 * third, end);
}

int main() {
    int n;
    while (cin >> n) {
        int len = pow(3, n);      // 총 길이
        string result(len, '-');  // 전부 '-'로 초기화

        makeCantor(result, 0, len);  // 가운데 공백을 넣기 위한 재귀

        cout << result << '\n';   // 최종 문자열 출력
    }
    return 0;
}

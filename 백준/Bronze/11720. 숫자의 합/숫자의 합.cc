#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // n 입력
    int n;
    cin >> n;

    // 문자열
    string str;
    cin >> str;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += str[i] - '0';
    }
    cout << sum;
}

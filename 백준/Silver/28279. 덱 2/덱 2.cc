#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;        // 명령의 개수
    deque<int> dq;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;

        if (a == 1) {
            int x; cin >> x;
            dq.push_front(x);
        } else if (a == 2) {
            int x; cin >> x;
            dq.push_back(x);
        } else if (a == 3) {
            // 덱에 정수가 있다면 맨 앞의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
            if (dq.empty() != 0) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }

        } else if (a == 4) {
            // 덱에 정수가 있다면 맨 뒤의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
            if (dq.empty() != 0) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            
        } else if (a == 5) {
            cout << dq.size() << '\n';
        } else if (a == 6) {
            if (dq.empty() == true) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }

        } else if (a == 7) {
            if (dq.empty() != 0) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
            }
        } else if (a == 8) {
            if (dq.empty() != 0) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
            }
        }
    }
}
#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    deque<int> dq;
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }

    int ans = 0;

    while(m--) {
        int num; cin >> num;
        int idx = 0;

        for (int i = 0; i < dq.size(); i++) {
            if (dq[i] == num) {
                idx = i;
                break;
            }
        }

        // 왼쪽이 더 적을 때
        if (idx <= dq.size() / 2) {
            while (idx--) {
                int temp = dq.front();
                dq.pop_front();
                dq.push_back(temp);
                ans++;
            }
        } else { // 오른쪽이 더 적을 때
            int cnt = dq.size() - idx;
            while (cnt--) {
                int temp = dq.back();
                dq.pop_back();
                dq.push_front(temp);
                ans++;
            }
        }

        dq.pop_front(); // 제거
    }

    cout << ans;
}

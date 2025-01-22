#include <iostream>
#include <queue>

using namespace std;
queue <int> q;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int k; cin >> k;

    // 큐에 값 저장
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";
    while (q.size() != 0) {
        for (int i = 1; i <= k-1; i++) {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        if (q.size() != 1) 
            cout << q.front() << ", ";
        else 
            cout << q.front() << ">";
        q.pop();
    }
}
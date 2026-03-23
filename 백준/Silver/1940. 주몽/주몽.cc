#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> v;

    for (int i = 0; i < N; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }

    // 정렬
    sort(v.begin(), v.end());
    
    int start = 0;
    int end = N - 1;

    int cnt = 0;

    while (start < end) {
        int sum = v[start] + v[end];
        
        if (sum > M) {
            end--;
        } else if (sum < M) {
            start++;
        } else {
            cnt++;
            start++;
            end--;
        }
    }
    cout << cnt;
}
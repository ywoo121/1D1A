#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, m; cin >> n >> m;
    bool check[201][201];

	for (int i = 0; i < m; i++) {
		int a, b; cin >> a >> b;
		check[a][b] = check[b][a] = true;
	}

	int ans = 0;	// 가능한 조합의 수

    // 1번째 아이스크림 선택
	for (int i = 1; i <= n; i++) {

        // 2번째 아이스크림 선택
		for (int j = i+1; j <= n; j++) {
			if (check[i][j]) continue;

            // 3번째 아이스크림 선택
			for (int k = j+1; k <= n; k++) {
				if (check[i][k] || check[j][k]) continue;
				ans++;
			}
		}		
	}
	cout << ans;

	return 0;
}
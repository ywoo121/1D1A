#include <iostream>
#include <vector>
using namespace std;

int main() {
	// 코드 작성
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n, k; cin >> n >> k;
	vector<int> v(n+1);

	for (int i = 2; i <= n; i++) {
		v[i] = i;
	}

	int cnt = 0;

	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j+= i) {
			if (v[j] != 0) {
				v[j] = 0;
				cnt++;
				if (cnt == k) {
					cout << j << '\n';
					return 0;
				}
			}
		}
	}
	return 0;
}
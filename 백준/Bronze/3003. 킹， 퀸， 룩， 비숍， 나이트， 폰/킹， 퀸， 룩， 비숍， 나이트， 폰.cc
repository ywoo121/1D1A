#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int k, q, l, b, n, p;
	cin >> k >> q >> l >> b >> n >> p;

	cout << 1-k << " " << 1-q << " " << 2-l << " " << 2-b << " " << 2-n << " " << 8-p;

	return 0;
}
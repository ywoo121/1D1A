#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// 코드 작성
	int n; cin >> n;
	vector<int> v(n*n);
	int arr[n*n];

	for (int i = 0; i < n * n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), greater<int>());

	cout << v[n-1];
	return 0;
}

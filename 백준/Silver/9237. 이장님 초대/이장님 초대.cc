#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	vector<int> d(n);

	for (int i = 0; i < n; i++) {
		cin >> d[i];
	}

	sort(d.rbegin(), d.rend()); 

	int day = 0;
	for (int i = 0; i < n; i++) {
		day = max(day, d[i] + i + 1);
	}
	cout << day + 1; // 마지막 날 +1 출력
}
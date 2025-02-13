#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sol() {
	int n; cin >> n;
	int cnt = 1;	// 최대 인원수 저장
	vector<pair<int, int> > v;

	// 서류성적, 면접성적 값 저장
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		v.push_back(make_pair(a, b));
	}

	sort(v.begin(), v.end());

	int rate = v[0].second;

	for (int i = 0; i < n; i++) {
		if (v[i].second < rate) {
			cnt++;
			rate = v[i].second;
		}
	}
	cout << cnt << '\n';
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		sol();
	}
	return 0;
}

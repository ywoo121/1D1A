#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> pq;
vector<int> v;

int  main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 0) {
			if (pq.empty()) {
				v.push_back(0);
			}
			else {
				v.push_back(pq.top());
				pq.pop();
			}
		}
		else {
			pq.push(a);
		}
	}
	for (int j = 0; j < v.size(); j++) {
		cout << v[j] << '\n';

    }
	return 0;
}
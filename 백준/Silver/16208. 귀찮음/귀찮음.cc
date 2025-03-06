#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// 코드 작성
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int n; cin >> n;
	int total_length = 0;
	vector<int> len(n);
	
	for (int i = 0; i < n; i++) {
		cin >> len[i];
		total_length += len[i];
	}

	sort(len.begin(), len.end());

	int price = 0;
	for (int i = 0; i < n-1; i++) {
		total_length -= len[i];
		price += len[i] * total_length;
	}
	cout << price;

	return 0;
}
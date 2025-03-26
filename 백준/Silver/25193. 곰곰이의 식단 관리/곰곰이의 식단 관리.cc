#include <iostream>
using namespace std;

int main() {
	int N, ans = 0, X =0;
	cin >> N;

	string S;
	cin >> S;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'C')ans++;
		else X++;
	}
	if (ans % (X+1) != 0)cout << ans / (X+1) +1;
	else cout << ans / (X + 1);
}
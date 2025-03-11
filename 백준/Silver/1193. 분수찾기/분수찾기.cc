#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int a = 1; 	// 대각선 번호
	int x; cin >> x;

	while (x - a > 0) {
		x -= a; a++;
	}

	if (a % 2) {
		cout << a + 1 - x << "/" << x;
	} else 
		cout << x << '/' << a + 1 - x;
	

	return 0;
}
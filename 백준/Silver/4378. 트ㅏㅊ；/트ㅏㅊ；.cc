#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	string str[4] = {"`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;'", "ZXCVBNM,./"};
	string s;
	
	while (getline(cin, s)) {
		for (int space = 0; space < s.size(); space++) {
			if (s[space] == ' ') {
				cout << s[space];
				continue;
			}

			bool found = false;
			for (int i = 0; i < 4; i++) { 
				for (int j = 0; j < str[i].size(); j++) {
					if (s[space] == str[i][j]) {
						cout << str[i][j - 1];
						found = true;
						break;
					}
				}
				if (found) 
					break; 
			}
		}
		cout << '\n';
	}
	return 0;	
}
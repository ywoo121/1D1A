#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    while(1) {
        int ans = 0;
        char a[256];

        cin.getline(a, 256);

        if (a[0] == '#') break;

		for (int i = 0; i < strlen(a) - 1; i++)
		{
			if (a[i] == 'a') ans++;
			if (a[i] == 'e') ans++;
			if (a[i] == 'i') ans++;
			if (a[i] == 'o') ans++;
			if (a[i] == 'u') ans++;
			if (a[i] == 'A') ans++;
			if (a[i] == 'E') ans++;
			if (a[i] == 'I') ans++;
			if (a[i] == 'O') ans++;
			if (a[i] == 'U') ans++;
		}
		cout << ans << '\n';
    }

}
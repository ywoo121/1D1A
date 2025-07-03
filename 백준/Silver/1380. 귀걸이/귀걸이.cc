#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, ans = 1;

    while (cin >> n && n != 0) {
        cin.ignore(); 

        vector<string> names(n + 1); 
        vector<int> cnt(n + 1, 0); 

        for (int i = 1; i <= n; i++) {
            getline(cin, names[i]);
        }

        for (int i = 0; i < 2 * n - 1; i++) {
            int num;
            char ch;
            cin >> num >> ch;
            cnt[num]++;
        }

        for (int i = 1; i <= n; i++) {
            if (cnt[i] == 1) {
                cout << ans << " " << names[i] << '\n';
                break;
            }
        }

        ans++;
    }
}

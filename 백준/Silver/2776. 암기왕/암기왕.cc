#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int tc, n, m; 
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        cin >> n;
        vector<int> note(n+1);
        
        for (int j = 0; j < n; j++) {
            int a; cin >> a;
            note.push_back(a);
        }
        sort(note.begin(), note.end());

        cin >> m;
        for (int j = 0; j < m; j++) {
            int num; cin >> num;
            if (binary_search(note.begin(), note.end(), num)) {
                cout << "1" << '\n';
            } else 
                cout << "0" << '\n';    
        }
    }
}
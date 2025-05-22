#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;

    while (cin >> n && n != 0) {
        double max_height = 0;
        vector<pair<string, double> > v;
        for (int i = 0; i < n; i++) {
            string str; double height;
            cin >> str >> height;
            v.push_back(make_pair(str, height));

            if (height > max_height) {
                max_height = height;
            }
        }

        for (int i = 0; i < n; i++) {
            if (v[i].second == max_height) {
                cout << v[i].first << " ";
            }
        } 
        cout << '\n';
    }
    return 0;
}
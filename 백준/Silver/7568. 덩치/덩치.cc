#include <iostream>
#include <vector>
using namespace std;

bool compare() {

}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<pair<int, int> > v;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int weight, height; cin >> weight >> height;
        v.push_back(make_pair(weight, height));
    }

    for (int i = 0; i < n; i++) {
        int rate = 1;
        for (int j = 0; j < n; j++) { 
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                rate++;
            }
        }
        cout << rate << ' ';
    }
}
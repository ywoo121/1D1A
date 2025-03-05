#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int b, c, d; cin >> b >> c >> d;
    vector<int> burger(b);
    vector<int> side(c);
    vector<int> drink(d);

    int total = 0, discount = 0;

    for (int i = 0; i < b; i++) {
        cin >> burger[i];
        total += burger[i];
    }
    sort(burger.rbegin(), burger.rend());

    for (int i = 0; i < c; i++) {
        cin >> side[i];
        total += side[i];
    }
    sort(side.rbegin(), side.rend());
    
    for (int i = 0; i < d; i++) {
        cin >> drink[i];
        total += drink[i];
    }
    sort(drink.rbegin(), drink.rend());

    int min_num = min(b, c); 
    min_num = min(min_num, d);

    for (int i = 0; i < min_num; i++) {
        int set = (burger[i] + drink[i] + side[i]) * 0.9;
        discount += set;
    }

    for (int i = min_num; i < b; i++) {
        discount += burger[i];
    }
    for (int i = min_num; i < c; i++) {
        discount += side[i];
    }
    for (int i = min_num; i < d; i++) {
        discount += drink[i];
    }

    cout << total << '\n' << discount;
}
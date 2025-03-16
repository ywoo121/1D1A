#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m, t; cin >> n >> m >> t;

    int mx = max(n, m);
    int mn = min(n, m);

    int cnt = 0;
    int burger = 0;
    int coke = 10000;

    while (t >= mx * cnt) {
        int tmp_t = t - mx * cnt;
        int tmp_burger = cnt;
        int tmp_coke = 0;

        tmp_burger += tmp_t / mn;
        tmp_coke += tmp_t % mn;

        if (coke > tmp_coke) {
            burger = tmp_burger;
            coke = tmp_coke;
        } else if (coke == tmp_coke && burger < tmp_burger) {
            burger = tmp_burger;
            coke = tmp_coke;
        }

        cnt++;
    }

    cout << burger << " " << coke << endl;
}
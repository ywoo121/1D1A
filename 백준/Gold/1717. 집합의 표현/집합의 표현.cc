#include <iostream>
#include <algorithm>
using namespace std;
int parent[1000001];

int find(int x) {
    if (parent[x] == x) {
        return x;
    }
    parent[x] = find(parent[x]);
    return parent[x];
}

void unionn(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) {
        return;
    }
    parent[y] = x;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;

    for (int i = 1; i < 1000001; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int type, a, b;
        cin >> type >> a >> b;

        if (type == 0) {
            unionn(a, b);
        } else {
            if (find(a) == find(b))
                cout << "YES" << '\n';
            else 
                cout << "NO" << '\n';
        }

    }
    
}
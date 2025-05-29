#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;

    vector<vector<int> > S(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> S[i][j];

    vector<int> A(n);
    A[0] = (S[0][1] + S[0][2] - S[1][2]) / 2;
    A[1] = S[0][1] - A[0];
    A[2] = S[0][2] - A[0];

    for (int i = 3; i < n; i++) {
        A[i] = S[0][i] - A[0];
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

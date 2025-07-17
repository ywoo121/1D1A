#include <iostream>
using namespace std;

int main() {
    int A, B, C; 
    int D;       

    cin >> A >> B >> C;
    cin >> D;

    int ttl = A * 3600 + B * 60 + C;

    ttl += D;

    int h = (ttl / 3600) % 24;
    int m = (ttl % 3600) / 60;
    int s = ttl % 60;

    cout << h << " " << m << " " << s;
}

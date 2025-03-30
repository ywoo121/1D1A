#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string str1; cin >> str1;
    string str2; cin >> str2;

    int len1 = str1.size();
    int len2 = str2.size();

    int l = lcm(len1, len2);

    // cout << l;
    int m1 = l / len1;
    int m2 = l / len2;

    string n_str1, n_str2;

    
    for (int i = 0; i < m1; i++) {
        n_str1 += str1;
    }
    for (int i = 0; i < m2; i++) {
        n_str2 += str2;
    }

    if (n_str1 == n_str2) {
        cout << "1";
    } else 
        cout << "0";
}

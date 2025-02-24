#include <iostream>
#include <regex>
using namespace std;

bool isInfected(string chro) {
    regex pattern("^[ABCDEF]?A+F+C+[ABCDEF]?$");
    return regex_match(chro, pattern);
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int T; cin >> T;    //테스트 케이스 개수

    while (T--) {
        string chro; cin >> chro;

        if (isInfected(chro)) 
            cout << "Infected!" << '\n';
        else 
            cout << "Good" << '\n';
    }
}
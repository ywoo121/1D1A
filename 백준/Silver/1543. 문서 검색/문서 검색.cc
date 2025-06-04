#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    string document, word;
    getline(cin, document);
    getline(cin, word);

    int cnt = 0;
    int docLen = document.length();
    int wordLen = word.length();

    for (int i = 0; i <= docLen - wordLen; ) {
        if (document.substr(i, wordLen) == word) {
            cnt++;
            i += wordLen;  
        } else {
            i++;  
        }
    }

    cout << cnt << '\n';
}

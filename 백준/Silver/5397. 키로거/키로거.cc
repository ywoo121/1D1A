#include <iostream>
#include <list>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;

    while (tc--) {
        // 문자열 입력
        string str;
        cin >> str;

        list<char> myList;
        list<char>::iterator iter = myList.begin();
        auto cursor = myList.end();

        for (int i = 0; i < str.size(); i++) {
            char tmp;
            tmp = str[i];

            if (tmp == '<') {
                if (cursor != myList.begin()) cursor--;
            } else if (tmp == '>') {
                if (cursor != myList.end()) cursor++;
            } else if (tmp == '-') {
                if (cursor != myList.begin()) {
                    cursor--;
                    cursor = myList.erase(cursor);
                }
            } else {
                myList.insert(cursor, tmp);
            }
        }

        for (iter = myList.begin(); iter != myList.end(); iter++) {
            cout << *iter;
        }
        cout << '\n';
    }
}

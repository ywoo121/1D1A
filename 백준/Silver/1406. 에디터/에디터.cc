#include <iostream>
#include <list>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    list<char> myList;
    list<char>::iterator iter = myList.begin();

    string str; cin >> str;

    // list에 값 집어넣기
    for (int i = 0; i < str.size(); i++) {
        myList.push_back(str[i]);
    }

    // 커서의 위치
    auto cursor = myList.end();

    int m; cin >> m;

    while (m--) {
        // 명령어 입력
        char c; cin >> c;

        if (c == 'P') {
            // 문자 입력
            char tmp; cin >> tmp;
            myList.insert(cursor, tmp);
        } else if (c == 'L') {
            // 커서가 문장의 맨 앞이면 무시
            if (cursor != myList.begin()) {
                cursor--;
            }
        } else if (c == 'D') {
            if (cursor != myList.end()) {
                cursor++;
            }
        } else if (c == 'B') {
            if (cursor != myList.begin()) {
                cursor--;
                cursor = myList.erase(cursor);
            }
        }
    }

    // 결과 출력
    for (iter=myList.begin(); iter != myList.end(); iter++) {
        cout << *iter;
    }

}

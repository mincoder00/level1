#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int cnt_p = 0, cnt_y = 0;
    bool answer = true;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        s[i] = tolower(s[i]);// �� char���� �ҹ��ڷ� ��ȯ�Ͽ� ���ڿ��� "����"
    }
    for (char c : s) {
        if (c == 'p') {
            cnt_p++;
        }
        else if (c == 'y') {
            cnt_y++;
        }
    }
    if (cnt_p != cnt_y) answer = false;
    return answer;
}
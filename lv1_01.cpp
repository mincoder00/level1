#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int num = s.length();
    if (num % 2 == 0) {
        answer += s[num / 2 - 1];
        answer += s[num / 2];
    }
    else {
        answer = s[(num - 1) / 2];
    }

    return answer;
}
// "string answer = "";"�� �� ���ڿ��� ��Ÿ���� �� ���� ����ǥ ���ڿ��� �ƴ϶�, 
//�ڵ��� �������� �� ���ڿ��� ��Ÿ���� ���� �� ���� ����ǥ ���ڿ��� ����ϴ� ���Դϴ�.
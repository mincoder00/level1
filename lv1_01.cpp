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
// "string answer = "";"는 빈 문자열을 나타내는 두 개의 따옴표 문자열이 아니라, 
//코드의 구문에서 빈 문자열을 나타내기 위해 두 개의 따옴표 문자열을 사용하는 것입니다.
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n;
bool compare(string a, string b) {
    char char1, char2;
    char1 = a[n]; char2 = b[n];
    if (char1 == char2) return a < b;
    return char1 < char2;
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    int len = strings.size();
    ::n = n;
    sort(strings.begin(), strings.end(), compare);
    for (int i = 0; i < len; i++) answer.push_back(strings[i]);
    return answer;
}
//bool compare로 sort 기준 정의
//정렬 후 answer에 삽입
// ::n = n이란, 함수 내에서 n이라는 지역 변수의 값을 전역 변수 n에 할당하는 것
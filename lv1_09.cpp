#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(char a, char b) {
    return a > b;
}
string solution(string s) {
    string answer = "";
    vector <char> vec;
    int n = s.length();
    for (int i = 0; i < n; i++) vec.push_back(s[i]);
    sort(vec.begin(), vec.end(), compare);
    for (int i = 0; i < n; i++)  answer += vec[i];
    return answer;
}
//�ҹ��� a���� z����: 97���� 122���� 
//�빮�� A���� Z���� : 65���� 90����
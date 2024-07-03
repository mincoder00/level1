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
//소문자 a부터 z까지: 97부터 122까지 
//대문자 A부터 Z까지 : 65부터 90까지
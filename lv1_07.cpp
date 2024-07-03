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
//bool compare�� sort ���� ����
//���� �� answer�� ����
// ::n = n�̶�, �Լ� ������ n�̶�� ���� ������ ���� ���� ���� n�� �Ҵ��ϴ� ��
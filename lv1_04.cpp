#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool flag = true; // ������ �������� ���� �ϳ��� ���°�?

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int len = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < len; i++) {
        if (arr[i] % divisor != 0) arr[i] = -1; // ������ �������� ������ -1
    }
    for (int i = 0; i < len; i++) {
        if (arr[i] != -1) flag = false; // ����������� ���� �����ϸ� false
    }
    if (flag) {��
        answer.clear();
        answer.push_back(-1);
        return answer;
    }
    for (int i = 0; i < len; i++) {
        if (arr[i] != -1) answer.push_back(arr[i]); // ������ �������� �� ���
    }
    return answer;
}
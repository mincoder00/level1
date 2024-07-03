#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool flag = true; // 나누어 떨어지는 수가 하나도 없는가?

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int len = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < len; i++) {
        if (arr[i] % divisor != 0) arr[i] = -1; // 나누어 떨어지지 않으면 -1
    }
    for (int i = 0; i < len; i++) {
        if (arr[i] != -1) flag = false; // 나누어떨어지는 수가 존재하면 false
    }
    if (flag) {ㅁ
        answer.clear();
        answer.push_back(-1);
        return answer;
    }
    for (int i = 0; i < len; i++) {
        if (arr[i] != -1) answer.push_back(arr[i]); // 나누어 떨어지는 수 출력
    }
    return answer;
}
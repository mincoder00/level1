#include <vector>
#include <iostream>
#include <stack>
#include <algorithm> //reverse 함수 사용하기 위함!
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> s;
    int len = arr.size();
    s.push(arr[0]);
    for (int i = 1; i < len; i++) {
        if (s.top() == arr[i]) continue;
        else s.push(arr[i]);
    }
    int ans_len = s.size();
    for (int i = 0; i < ans_len; i++) {
        answer.push_back(s.top());
        s.pop();
    }
    reverse(answer.begin(), answer.end());
    // 스택 뒤에서부터 입력 받으므로 1 0 3 1을 reverse해줘야 함
    return answer;
}
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b) {
        answer = a;
    }
    else {
        long long maximum = max(a, b);
        long long  minimum = min(a, b);
        answer = ((maximum - minimum + 1) * (maximum + minimum)) / 2;
    }

    return answer;
}
//maximum�� minimum�� ���� long long Ÿ������ ���� �����ָ� ���� ��
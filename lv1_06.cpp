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
//maximum과 minimum을 각각 long long 타입으로 선언 안해주면 오류 남
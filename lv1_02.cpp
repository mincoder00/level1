#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    for (int i = 1; i < a; i++) {
        if (i == 2) {
            b += 29;
        }
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            b += 31;
        }
        else b += 30;
    }
    if (b % 7 == 0) answer = "THU";
    if (b % 7 == 1) answer = "FRI";
    if (b % 7 == 2) answer = "SAT";
    if (b % 7 == 3) answer = "SUN";
    if (b % 7 == 4) answer = "MON";
    if (b % 7 == 5) answer = "TUE";
    if (b % 7 == 6) answer = "WED";
    return answer;
}
// 29일까지 있는 월: 2
// 31일까지 있는 월: 1, 3, 5, 7, 8, 10 ,12
// 30일까지 있는 월: etc


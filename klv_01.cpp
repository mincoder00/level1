#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int solution(string s) {
    bool allInt = true;
    int answer = 0;
    unordered_map<string, string> numMap = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
        {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"},
        {"eight", "8"}, {"nine", "9"}
    };
    for (int i = 0; i < s.length();i++) {
        if (!isdigit(s[i])) {
            allInt = false;
            break;
        }
    }
    if (allInt) answer = stoi(s);
    else {
        string n = "";
        string ans = "";
        for (int i = 0; i < s.length();i++) {
            if (isdigit(s[i])) {
                ans += s[i];
            }
            else {
                n += s[i];
                if (numMap.find(n) != numMap.end()) {
                    ans += numMap[n];
                    n = "";
                }
            }
        }
    }
    return answer;

}
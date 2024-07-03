#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int len = nums.size();
    sort(nums.begin(), nums.end());
    int distinct = 1;
    for (int i = 0; i < len - 1; i++) {
        if (nums[i + 1] != nums[i]) distinct++;
    }
    int answer = min(len / 2, distinct);
    return answer;
}
// 값이 8개, distinct가 6개라면
// 4개를 고르는데 answer = 4
// 값이 8개인데 distinct가 2개라면 (1,1,1,1,2,2,2,2)
// 4개를 고르는데 answer = 2
// 귀납적으로 추론해보기
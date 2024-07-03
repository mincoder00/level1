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
// ���� 8��, distinct�� 6�����
// 4���� ���µ� answer = 4
// ���� 8���ε� distinct�� 2����� (1,1,1,1,2,2,2,2)
// 4���� ���µ� answer = 2
// �ͳ������� �߷��غ���
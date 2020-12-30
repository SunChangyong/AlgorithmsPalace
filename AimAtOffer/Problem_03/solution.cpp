/*
 * Problem_03: find duplicate numbers from array
 */
/*
找出数组中重复的数字。

在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

示例 1：

输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3 
 

限制：

2 <= n <= 100000
*/

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        // 使用布隆过滤器思想
        int maxNum = 100000;
        char* bitField = new char[maxNum]();

        // // 使用vector迭代器遍历元素
        vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end(); it++) {
            if (bitField[*it] != 0) return *it;
            else bitField[*it]++;
        }
        return -1;
    }
};

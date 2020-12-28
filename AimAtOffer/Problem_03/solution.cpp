/*
 * Problem_03: find duplicate numbers from array
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

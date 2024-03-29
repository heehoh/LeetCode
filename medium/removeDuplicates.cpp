class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> newNums;
        int size = nums.size();
        newNums.reserve(size);
        for (int i = 0; i < size; ++i) {
            if (i == 0 || i == 1 || nums[i-2] != nums[i])
                newNums.push_back(nums[i]);
        }
        nums = newNums;
        return nums.size();
    }
};

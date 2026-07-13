class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int num2 = target - num; // num + num2 = target;
            if (mpp.find(num2) != mpp.end()) {
                return {mpp[num2], i};
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};
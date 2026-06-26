class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans; // =makes vector named ans
        for (int i = 0; i < nums.size(); i++) {
            int nge = -1;
            for (int j = 1; j < nums.size(); j++) {
                int index = (i+j)%nums.size(); // makes array circular
                if (nums[index] > nums[i]) {
                    nge = nums[index];
                    break;
                }
            }
            ans.push_back(nge);
        }
        return ans;
    }
};
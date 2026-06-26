class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (is_sorted(nums.begin(),nums.end())){
            return true;
        }else if (is_sorted(nums.rbegin() , nums.rend())){
            return true;
        }
        else {
            return false;
        }
    }
};

/*
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i] <= nums[j] || nums[i] >= nums[j]){
                    return true;
                }
                else {
                    return false;
                }
            }
        }
        return 0;
    }
};
*/
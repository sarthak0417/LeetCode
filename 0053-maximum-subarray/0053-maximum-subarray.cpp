class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > maxi)
                maxi = sum;
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};

/*

// brute force

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN ;

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                int sum = 0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }
};
*/
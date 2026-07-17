class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int presum = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            presum += nums[i];
            int remove = presum - k;
            cnt += mpp[remove];
            mpp[presum] += 1;
        }
        return cnt;
    }
};

/*
//better
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
*/

/*
//brute force
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum =0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                if(sum==k){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
*/
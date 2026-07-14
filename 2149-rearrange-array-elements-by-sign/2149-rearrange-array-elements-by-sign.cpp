class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int posIndex = 0;
        int negIndex = 1;

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0){
                ans[negIndex]=nums[i];
                negIndex += 2;
            }
            else {
                ans[posIndex]=nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};

/*

//run time error

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        vector<int> pos;
        vector<int> neg;

        for (int i=0;i<n/2;i++){
            nums[2*i]=pos[i];
            nums[2*(i+1)]=neg[i];
        }
        return nums;
    }
};

*/

/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int index =0;
        for(auto it : st){
            nums[index]=it;
            index ++;
        }
        return index;
    }
};
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j] !=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return(i+1);
    }
};
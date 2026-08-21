class Solution {
public:
  vector<int> findMissingElements(vector<int> &nums) {
    if (nums.empty()) {
      return {};
    }

    set<int> vals(nums.begin(), nums.end());
    vector<int> ans;
    int mn = *vals.begin();
    int mx = *vals.rbegin();

    for (int i = mn; i <= mx; i++) {
      if (!vals.count(i)) {
        ans.push_back(i);
      }
    }

    return ans;
  }
};
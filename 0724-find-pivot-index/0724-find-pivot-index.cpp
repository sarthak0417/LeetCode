class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n);
        vector<int> right(n);
        left[0] = arr[0];
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] + arr[i];
        }
        right[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            right[i] = arr[i] + right[i + 1];
        }

        for (int i = 0; i < n; i++) {
            int leftSum = (i == 0) ? 0 : left[i - 1]; 
            // int variable_name = condotion ? value_if_true : value_if_false;
            int rightSum = (i == n - 1) ? 0 : right[i + 1];

            if (leftSum == rightSum) {
                return i;
            }
        }
        return -1;
    }
};
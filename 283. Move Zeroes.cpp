class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0, n = nums.size();

        for (int i = 0; i < n; i++) {

            if (nums[i] != 0) {
                swap(nums[i], nums[k]);
                k++;
            }

        }
    }
};
 //left 只指向 0 位置。

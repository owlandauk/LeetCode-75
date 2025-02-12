class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int L = nums.size();
        if (L < 3) {
            return false;
        }
        /*
        int min_val = 0;
        int max_val = 0;
        int left = 0, right = 0;
        for (int i = 1; i < L; i++) {
            left = i - 1;
            right = i + 1;
            while (left >= 0&&right<L) 
            {
                if (nums[left] < nums[i]) {
                    while (right < L) 
                    {
                        if (nums[right] > nums[i]) {
                            return true;
                        } 
                        else 
                        {
                            right++;
                        }
                    }
                } 
                else 
                {
                    left--;
                }
            }
        }
        */
      //找到第一小first 和第二小second，顺找找到比他们都大就构成Triplet，First<Second<num
        int first=INT_MAX,second=INT_MAX;
        for(int num:nums){
            if(num<=first)
            {
                first=num;
            }
            else if(num<=second)
            {
                second=num;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};

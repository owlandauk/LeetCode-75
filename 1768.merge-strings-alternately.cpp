/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int L1=word1.size();
        int L2=word2.size();
        std::vector<char> word3(L1+L2);
        if(L1>L2)
        {
            word3[0]=word1[0];
            for(int i=1;i++;i<L1+L2)
            {
                int j=1,k=0;
                if(i%2==1&&k<=L2)
                    word3[i]=word2[k];
                    k++;
                else
                    word3[i]=word2[j];
                    j++;
            }
        }
        return word3
    }
};
// @lc code=end


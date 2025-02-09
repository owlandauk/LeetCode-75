class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        string temp = "";

        // **1. 去掉开头空格**
        int left = 0;
        while (left < s.size() && s[left] == ' ') {
            left++;
        }

        // **2. 去掉末尾空格**
        int right = s.size() - 1;
        while (right >= 0 && s[right] == ' ') {
            right--;
        }

        // **3. 遍历字符串**
        for (int i = left; i <= right; i++) {
            if (s[i] != ' ') {
                temp += s[i]; // 记录单词
            }

            if (s[i] == ' ' && s[i - 1] != ' ') { // 遇到空格且前一个是字母
                if (result.empty()) {
                    result = temp;
                } else {
                    result = temp + ' ' + result;
                }
                temp = ""; // 清空 temp，准备存储下一个单词
            }
        }

        // **4. 处理最后一个单词**
        if (!temp.empty()) {
            if (result.empty()) {
                result = temp;
            } else {
                result = temp + ' ' + result;
            }
        }

        return result;
    }
};

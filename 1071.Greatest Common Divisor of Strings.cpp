*/
去最大公约数gcd，
  然后str1.substr验证是否可以重复构建
/*
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string result="";
        string candidate="";
        string repeat_str1="";
        string repeat_str2="";
        int gcd_len=gcd(str1.size(),str2.size()); //greatest common divisor 最大公约数 
        candidate=str1.substr(0,gcd_len);
        int flag_str1=0,flag_str2=0;
        for(int i=0;i<str1.size()/gcd_len;i++)
        {
            repeat_str1+=candidate;
        }

        for(int i=0;i<str2.size()/gcd_len;i++)
        {
            repeat_str2+=candidate;
        }
        if((repeat_str1==str1)&&(repeat_str2==str2))
        {
            result=candidate;
        }
        return result;

    }
};

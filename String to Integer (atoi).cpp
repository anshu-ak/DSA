// https://leetcode.com/problems/string-to-integer-atoi/
class Solution {
public:
    int myAtoi(string s) {
        int result = 0;
        int sign = 1;
        int i = 0;
        int n = s.size();
        
        while(i < n && s[i] == ' '){
            i++;
        }
        if(i < n && s[i]=='+'){
            sign = 1;
            i++;
        }
        else if(i < n && s[i]=='-'){
            sign = -1;
            i++;
        }
        
        while(i<n && isdigit(s[i])){
            int digit = s[i]-'0';
            //check overflow/undeflow conditions.
            if(result > INT_MAX/10 || (result == INT_MAX/10 && digit > INT_MAX%10))
                return sign==1 ? INT_MAX : INT_MIN;
            result = 10*result + digit;
            i++;
        }
        return sign*result;
    }
};
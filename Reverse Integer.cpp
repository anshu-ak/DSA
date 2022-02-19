// https://leetcode.com/problems/reverse-integer/
// class Solution {
// public:
//     int reverse(int x) {
//         int rev = 0;
//         int pop = 0;
//         while(x != 0){
//             pop = x%10;
//             x = x/10;
//             if(rev > INT_MAX/10 || (rev == INT_MAX/10 && pop > 7)) return 0;
//             if(rev < INT_MIN/10 || (rev == INT_MIN/10 && pop < -8)) return 0;
//             rev = rev*10 + pop;
//         }
//         return rev;
//     }
// };

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x){
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
            rev = rev*10 + x%10;
            x/=10;
        }
        return rev;
    }
};
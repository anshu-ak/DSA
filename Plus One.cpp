// https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        int cnt=0;
        for(int i=n-1; i>=0; i--){
            if(digits[i]==9) {
                cout << digits[i] << endl;;
                digits[i]=0;
                cnt++;
            }    
            else {
                digits[i]++;
                return digits;
            }
        }
        
        // if all the digits are zero
        vector<int> digits1(n+1, 0);
        digits1[0] = 1;
        return digits1;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        bool carry = true;  // Flag to track carry over
        
        for (int i = n - 1; i >= 0; i--) {
            if (carry) {
                if (digits[i] == 9) {
                    digits[i] = 0;
                } else {
                    digits[i]++;
                    carry = false;
                }
            }
        }
        
        if (carry) {
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};

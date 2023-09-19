class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carry = a & b;
        // cout << " carry " << carry;
        unsigned int result = a ^ b;
        // cout << " result " << result;
        while(carry != 0)
        {
            unsigned int shiftedcarry = carry << 1;
            // cout << " shifted " << shiftedcarry;
            carry = result & shiftedcarry;
            // cout << " inloop carry " << carry;
            result ^= shiftedcarry;
            // cout << " inloop result " << result;
        }
        return result;
    }
};
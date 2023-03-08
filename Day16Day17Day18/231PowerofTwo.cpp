class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            // If n is non-positive, it is not a power of two
            return false;
        }
        while (n > 1) {
            if (n % 2 != 0) {
                // If n is not divisible by 2, it is not a power of two
                return false;
            }
            n /= 2;
        }
        // If we reach this point, n is a power of two
        return true;
    }
};

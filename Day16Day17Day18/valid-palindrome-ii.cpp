class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                // If the characters at the left and right pointers are not equal,
                // we have two options: delete the left character or delete the right character
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        // If we reach this point, the string is already a palindrome or can be made into one by deleting at most one character
        return true;
    }
    
    bool isPalindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                // If we find a mismatch, the string cannot be made into a palindrome by deleting at most one character
                return false;
            }
            left++;
            right--;
        }
        // If we reach this point, the string is a palindrome after deleting at most one character
        return true;
    }
};

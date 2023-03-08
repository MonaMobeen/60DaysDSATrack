#include <unordered_map>
#include <string>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> freq;
        
        // Count the frequency of each character in magazine
        for (char c : magazine) {
            freq[c]++;
        }
        
        // Check if the characters in ransomNote can be formed using the characters in magazine
        for (char c : ransomNote) {
            if (freq[c] == 0) {
                return false;
            } else {
                freq[c]--;
            }
        }
        
        return true;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0) {
                // If we have already seen the number before, it is a duplicate
                return true;
            }
            seen.insert(num);
        }
        // If we reach this point, there are no duplicates
        return false;
    }
};

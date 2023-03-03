public class Solution {
    public int BalancedStringSplit(string s) {
        int count = 0;
        int balance = 0;
        
        foreach(char c in s) {
            if(c == 'L') balance++;
            else balance--;
            
            if(balance == 0) count++;
        }
        
        return count;
    }
}

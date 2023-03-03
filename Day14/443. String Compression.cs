public class Solution {
    public int Compress(char[] chars) {
        if (chars == null || chars.Length == 0) {
            return 0;
        }
        int index = 0, count = 1;
        for (int i = 1; i <= chars.Length; i++) {
            if (i < chars.Length && chars[i] == chars[i-1]) {
                count++;
            } else {
                chars[index++] = chars[i-1];
                if (count > 1) {
                    foreach (char c in count.ToString()) {
                        chars[index++] = c;
                    }
                }
                count = 1;
            }
        }
        return index;
    }
}

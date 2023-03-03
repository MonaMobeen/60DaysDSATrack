public class Solution {
 
    public int LastStoneWeight(int[] stones) {
  
    while (stones.Length > 1) {
       
        Array.Sort(stones);

        int n = stones.Length;
        int x = stones[n - 1], y = stones[n - 2];
       
        if (x == y) {
           
            Array.Resize(ref stones, n - 2);
        } else {
         
            stones[n - 2] = x - y;
            Array.Resize(ref stones, n - 1);
        }
    }
 
    return stones.Length > 0 ? stones[0] : 0;
}

}
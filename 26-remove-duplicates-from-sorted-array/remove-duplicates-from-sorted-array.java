class Solution {
    public int removeDuplicates(int[] nums) {


      int length=0;
      for( int i=0;i<nums.length;i++)
      {
          if(i==nums.length-1|| nums[i]!=nums[i+1])
          {
              nums[length++]=nums[i];
          }
      } 

      return length;
    }
}
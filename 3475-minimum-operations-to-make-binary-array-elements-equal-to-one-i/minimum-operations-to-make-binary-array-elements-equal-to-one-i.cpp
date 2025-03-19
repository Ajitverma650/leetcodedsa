class Solution {
public:
    int minOperations(vector<int>& nums) {
        

        int n = nums.size();
        int c = 0;
        for (int i=0; i<n-2; i ++) {

            if (nums[i]==0) {
                 c++;
                nums[i] = 1;
                nums[i + 1] = nums[i + 1] ^ 1;
                nums[i + 2] = nums[i + 2] ^ 1;
            }
        }
        for (int i = 0; i < n; i = i + 1) {
            if (nums[i] == 0) {
                return -1;
            }
        }

        return c;
    
    }
};
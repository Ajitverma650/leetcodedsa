class Solution {
public:

    // extend AP starting from index j with previous value = prev
    int solve(vector<int>& nums , int j , int n, int d , int prev) {     
        int cnt = 0;
        for (int k = j; k < n; k++) {
            if (nums[k] - prev == d) {
                cnt++;
                prev = nums[k];   // move the sequence forward
            }
        }
        return cnt;
    }

    int longestArithSeqLength(vector<int>& nums) {

        int result = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
  for (int j = i + 1; j < n; ++j) {
    int d = nums[j] - nums[i];
    int length = 2;
    int prev = nums[j];
    for (int k = j + 1; k < n; ++k) {
      if (nums[k] - prev == d) {
        ++length;
        prev = nums[k];
      }
    }
    result = max(result, length);
  }
}
      return result;
    }
};

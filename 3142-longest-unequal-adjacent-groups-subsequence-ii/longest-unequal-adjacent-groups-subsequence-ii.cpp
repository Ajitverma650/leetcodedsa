class Solution {
public:
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
         vector<int> dp(groups.size(), 1); // Create a vector to store the maximum subsequence length for each word.
        vector<int> pv(groups.size(), -1); // Create a vector to store the previous word index in the longest subsequence.

        // Iterate through the words and groups to find the longest subsequence.
        for (int i = 1; i < groups.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (groups[i] == groups[j]) continue; // If the groups are the same, skip.
                if (words[i].size() != words[j].size()) continue; // If word lengths are different, skip.

                int diff = 0;
                for (int k = 0; k < words[i].size(); k++) {
                    diff += (words[i][k] != words[j][k]); // Calculate the difference in characters.
                }

                if (diff != 1) continue; // If there's more or less than one character difference, skip.

                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1; // Update the subsequence length if it's longer.
                    pv[i] = j; // Update the previous word index.
                }
            }
        }

        int wi = (max_element(dp.begin(), dp.end()) - dp.begin()); // Find the index of the maximum subsequence length.
        vector<string> ans;

        while (wi != -1) {
            ans.push_back(words[wi]); // Add words to the answer in reverse order to get the longest subsequence.
            wi = pv[wi]; // Move to the previous word in the subsequence.
        }

        reverse(ans.begin(), ans.end()); // Reverse the answer to get the correct order.
        return ans;
    }
};
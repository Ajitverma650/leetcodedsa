class Solution {
public:
    int solve(int ind, int amount, vector<int>& coins, int n, vector<vector<int>>& dp) {
        if (amount == 0) return 0; 
        if (amount < 0 || ind >= n) return INT_MAX - 1; 

        if (dp[ind][amount] != -1) return dp[ind][amount]; 

        
        int include = 1 + solve(ind, amount - coins[ind], coins, n, dp);

        
        int exclude = solve(ind + 1, amount, coins, n, dp);

        return dp[ind][amount] = min(include, exclude);
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));

        int result = solve(0, amount, coins, n, dp);
        return (result == INT_MAX - 1) ? -1 : result; 
    
}

};
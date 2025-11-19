class Solution {
public:
    int result = INT_MAX;

    int getMax(vector<int> &arr) {
        int ans = 0;
        for (int x : arr) ans = max(ans, x);
        return ans;
    }

    void solve(int idx, vector<int>& cookies, vector<int>& children, int k) {
        if (idx == cookies.size()) {
            result = min(result, getMax(children));
            return;
        }

        int cookie = cookies[idx];

        for (int i = 0; i < k; i++) {
            children[i] += cookie;

            solve(idx + 1, cookies, children, k);

            children[i] -= cookie;

            // small pruning: if child has 0, don't assign same cookie to empty next child
            if (children[i] == 0) break;
        }
    }

    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> children(k, 0);

        solve(0, cookies, children, k);

        return result;
    }
};

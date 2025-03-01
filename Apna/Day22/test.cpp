#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int countWaysToPaintFence(int n, int m, int R, vector<int>& arr) {
    int L = 1;  // Assume L is 1, since only R is provided
    // dp[i][j] = number of ways to paint first i blocks using j colors
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    dp[0][0] = 1;  // Base case: 1 way to paint 0 blocks with 0 colors

    // Prefix sum array to quickly compute segment sums
    vector<int> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
    }

    // Iterate over the number of blocks
    for (int i = 1; i <= n; ++i) {
        // Try to paint with j colors
        for (int j = 1; j <= m; ++j) {
            // Consider all possible segments that can end at block i
            for (int k = i; k > 0; --k) {
                // Sum of the segment arr[k-1:i]
                int segment_sum = prefix_sum[i] - prefix_sum[k - 1];
                if (L <= segment_sum && segment_sum <= R) {
                    dp[i][j] = (dp[i][j] + dp[k - 1][j - 1]) % MOD;
                } else if (segment_sum > R) {
                    break;  // No need to check further since sums are increasing
                }
            }
        }
    }

    // The answer is the number of ways to paint all n blocks with exactly m colors
    return dp[n][m];
}

int main() {
    int n, m, R;
    cin >> n >> m >> R;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Calculate and output the result
    int result = countWaysToPaintFence(n, m, R, arr);
    cout << result << endl;

    return 0;
}
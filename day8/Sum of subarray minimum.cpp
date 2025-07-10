class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        int n = arr.size();
        vector<int> prevLess(n), nextLess(n);
        stack<int> s;
        const int MOD = 1e9 + 7;

        // Find Previous Less Element Index
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && arr[s.top()] > arr[i])
                s.pop();
            prevLess[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        // Clear stack for next use
        while (!s.empty()) s.pop();

        // Find Next Less Element Index
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            nextLess[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        // Calculate the result using contribution of each element
        long long result = 0;
        for (int i = 0; i < n; ++i) {
            long long left = i - prevLess[i];
            long long right = nextLess[i] - i;
            result = (result + (arr[i] * left * right) % MOD) % MOD;
        }

        return (int)result;
    }
};

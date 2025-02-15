class Solution {
    public:
        int digitSum(int n) {
            int sum = 0;
            while (n) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        }
        int maximumSum(vector<int>& nums) {
            map<int, vector<int>> mp;
            for (auto x : nums) {
                int sum = digitSum(x);
                mp[sum].push_back(x);
            }
            // dbg(mp);
            int ans = -1;
            for (auto [sum, v] : mp) {
                int len = (int)v.size();
                if (len < 2)
                    continue;
                for (int i = 0; i < len; ++i) {
                    for (int j = i + 1; j < len; ++j) {
                        int sum = v[i] + v[j];
                        ans = max(sum, ans);
                    }
                }
            }
            return ans;
        }
    };
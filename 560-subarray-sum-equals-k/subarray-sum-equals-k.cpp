class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> f;
        f[0] = 1;

        int sum = 0;
        int res = 0;

        for (int x : nums) {
            sum += x;
            res += f[sum - k];
            f[sum]++;
        }

        return res;
    }
};
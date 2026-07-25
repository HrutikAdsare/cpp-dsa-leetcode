class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int be = nums[0];
        int ans=nums[0];

        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=be+nums[i];
            be=max(v1,v2);
            ans=max(ans,be);
        }
        return ans;
    }
};
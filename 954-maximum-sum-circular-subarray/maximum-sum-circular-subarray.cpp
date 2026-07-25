class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int be=nums[0];
        int we=nums[0];
        int ans=nums[0];
        int maxsum=nums[0];
        int minsum=nums[0];

        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=nums[i]+be;
            int v3=nums[i]+we;
            be=max(v1,v2);
            we=min(v1,v3);
            maxsum=max(maxsum,be);
            minsum=min(minsum,we);
        }
        sum=sum-minsum;
        if(maxsum<0) return maxsum;
        return max(maxsum, sum);
    }
};
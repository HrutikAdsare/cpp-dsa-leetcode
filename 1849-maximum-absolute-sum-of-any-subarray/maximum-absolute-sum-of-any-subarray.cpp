class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int be=nums[0];
        int we=nums[0];
        int ans=abs(nums[0]);

        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=nums[i]+be;
            int v3=nums[i]+we;
            be=max(v1,v2);
            we=min(v1,v3);
            ans=max(ans,max(abs(be),abs(we)));
        }      
        return ans;
    }
};
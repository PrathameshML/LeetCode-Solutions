class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum=0;
            for(int j=0; j<=i; j++){
               sum+=nums[j]; 
            }
            ans[i]=sum;
        }
        return ans;
    }
};
//tc=n^2
//sp=n

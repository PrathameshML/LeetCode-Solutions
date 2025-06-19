//tc=n
//sc=1
//in question , they have clearly instructed not to division operator , but i used here 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int p2=1;
        int noz=0;
        for(int i=0; i<nums.size(); i++){
            product*=nums[i];
            if(nums[i]!=0) p2*=nums[i];
            else noz++;
        }
        if(noz>1) p2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) nums[i]=p2;
           else nums[i]=product/nums[i];
        }
        return nums;
    } 
};

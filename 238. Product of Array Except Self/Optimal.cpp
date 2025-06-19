//tc=n
//sc=n or 1 (because you have to return a vector)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size());
       
        prefix[0]=1;
        int p=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            prefix[i]=p;
            p*=nums[i];

        }
         p=nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            prefix[i]=p*prefix[i];
            p*=nums[i];
        }
        
        return prefix;
    }
};
